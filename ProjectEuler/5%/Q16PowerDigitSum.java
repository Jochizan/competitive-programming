import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q16PowerDigitSum {

    static BigInteger ans = new BigInteger("2");
    static int res = 0;

    public static void main(String[] args) {
        for(int i = 0; i < 999; ++i)
            ans = ans.multiply(BigInteger.valueOf(2));
        String s[] = new String[ans.toString().length()];
        s = ans.toString().split("");
        for(int i = 0; i < s.length; ++i)
            res += Integer.parseInt(s[i]);
        out.println(res);
        out.println(ans);
    }
}
