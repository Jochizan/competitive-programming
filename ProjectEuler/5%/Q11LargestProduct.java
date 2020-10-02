import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q11LargestProduct {

    static int ar[][] = new int[20][20];
    static int ans = 0;
    static Scanner in = new Scanner(System.in);

    static void solve() {
        for(int i = 0; i < 20; ++i) {
            for(int j = 0; j < 20; ++j) {
                int cont[] = {1, 1, 1, 1};
                int l = 3;
                for(int k = 0; k < 4; ++k) {
                    if(i + 4 > 19 || j + 4 > 19)
                        break;
                    cont[0] *= ar[i][j+k];
                    cont[1] *= ar[i+k][j];
                    cont[2] *= ar[i+k][j+k];
                    cont[3] *= ar[i+l][j+k];
                    l--;
                }
                int temp = max(cont[0], cont[1], cont[2], cont[3]);
                if(temp > ans)
                    ans = temp;
            }
        }
        out.println(ans);
    }

    static int max(int a, int b, int c, int d) {
        a = Math.max(a, b);
        b = Math.max(a, c);
        return Math.max(b, d);
    }

    public static void main(String[] args) {
        for(int i = 0; i < 20; ++i)
            for(int j = 0; j < 20; ++j)
                ar[i][j] = in.nextInt();
        solve();
    }
}
