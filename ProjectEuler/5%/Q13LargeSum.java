import java.io.*;
import java.util.*;
import static java.lang.System.out;

public class Q13LargeSum {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static int ar[][] = new int[100][50];
    static ArrayList<Integer> ans = new ArrayList<Integer>();

    static void solve() {
        int rest = 0;
        for(int i = 49; i >= 0; --i) {
            int sum = 0;
            for(int j = 99; j >= 0; --j)
                sum += ar[j][i];
            sum += rest;
            rest = sum / 10;
            ans.add(sum - rest * 10);
        }
        ans.add(rest);
        for(int i = ans.size() - 1; i >= 0; --i)
            out.print(ans.get(i));
    }

    public static void main(String[] args) {
        for(int i = 0; i < 100; i++) {
            String lines;
            String strs[] = new String[50];
            try {
                lines = br.readLine();    
                strs = lines.trim().split("");
            }catch(IOException e) {
            }
            for(int j = 0; j < 50; ++j)
                ar[i][j] = Integer.parseInt(strs[j]);
        }
        solve();
    }
}
