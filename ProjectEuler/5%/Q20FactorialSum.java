import java.math.*;
import static java.lang.System.out;

public class Q20FactorialSum {

    static int ans = 0;
    static BigInteger fac = BigInteger.ONE;

    public static void main(String[] args) {
        for(int i = 2; i <= 100; ++i)
            fac = fac.multiply(BigInteger.valueOf(i));
        String s[] = fac.toString().split("");
        for(int i = 0; i < s.length; ++i)
            ans += Integer.parseInt(s[i]);
        out.println(ans);
        out.println(fac);
    }
}
