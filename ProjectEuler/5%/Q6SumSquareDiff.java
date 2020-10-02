import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q6SumSquareDiff {

    static long ans; 
    static int n;
    private static Scanner in = new Scanner(System.in);

    static void solve() {
        ans = sumSquare(n) - squareSums(n);
        out.println(ans);
    }

    static long sumSquare(int n) {
        long sum = 0;
        for(int i = 1; i <= n; ++i)
            sum += i;
        return (long)Math.pow(sum, 2);
    }

    static long squareSums(int n) {
        long sum = (n*(n+1)*(2*n+1))/6;
        return sum;
    }

    public static void main(String[] args) {
        n = 100;
        solve();
        out.println("Finish");
    }
}
