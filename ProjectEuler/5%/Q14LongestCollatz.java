import java.util.*;
import static java.lang.System.out;

public class Q14LongestCollatz {

    static ArrayList<Integer> ans = new ArrayList<Integer>();
    static ArrayList<Long> ens = new ArrayList<Long>();

    static int hill(long n) {
        int cont = 0;
        if(n % 2 == 0)
            return 1;
        while(n != 1) {
            if(n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            cont++;
        }
        return cont;
    }

    public static void main(String[] args) {
        for(long i = 2; i <= 1000000; ++i) {
            ans.add(hill(i));
            ens.add(i);
        }
        out.println(ens.get(ans.indexOf(Collections.max(ans))));
    }
}
