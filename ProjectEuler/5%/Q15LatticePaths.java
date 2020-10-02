import java.util.*;
import static java.lang.System.out;

public class Q15LatticePaths {

    static long paths(int n) {
        long dp[][] = new long[n+1][n+1];
        for(int i = 0; i < n+1; ++i)
            dp[i][0] = 1;
        for(int i = 0; i < n+1; ++i)
            dp[0][i] = 1;
        for(int i = 1; i < n+1; ++i)
            for(int j = 1; j < n+1; ++j)
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
        return dp[n][n];
    }

    public static void main(String[] dpgs) {
        out.println(paths(20));
    }
}
