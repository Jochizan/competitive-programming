import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q10SumPrims {

    static BigInteger ans = BigInteger.ZERO;
    private static Scanner in = new Scanner(System.in);

    static void solve() {
        for (int i = 2; i < 2000000; ++i)
            if(Prim(i))
                ans = ans.add(BigInteger.valueOf(i));
        out.println(ans); 
    }

    static boolean Prim(int num){
        int lim = (int)Math.sqrt((double)num);
        for(int i = 2; i <= lim; ++i)
            if (num % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        solve();
    }
}
