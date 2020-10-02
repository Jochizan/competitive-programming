import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q5SmallestM {

    static int n, ans = (int)Math.pow(2, 31) - 1;
    private static Scanner in = new Scanner(System.in);

    static void solve() {
        for(int i = 1; i < n; ++i) {
            if(div(i) && ans > i) {
                ans = i;
                break;
            }
        }
        print(str(ans));
    }

    static String str(int n) {
        return Integer.toString(n);
    }

    static void print(String s) {
        out.println(s); 
    }
    
    static boolean div(int n) {
        int cont = 0;
        for(int j = 1; j <= 20; ++j)
            if(n % j != 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        n = 2140000000;
        solve();
        print("Finish");
    }
}
