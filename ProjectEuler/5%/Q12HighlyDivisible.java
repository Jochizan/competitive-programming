import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q12HighlyDivisible {

    static int ent = 500;
    static final int max = 500;
    static ArrayList<Long> ar = new ArrayList<Long>();

    static int divs(long n) {
        int div = 0;
        long i = 1;
        while(i * i < n) {
            if(n % i == 0)
                div += 2;
            ++i;
        }
        if(i * i == n)
            div++;
        return div;
    }

    public static void main(String[] args) {
        int index = 0;
        long numTri = 0;
        while(ar.size() < max) {
            index++;
            numTri += index;
            if(ar.size() > 300 && numTri % 10 != 0)
                continue;
            int temp = divs(numTri);
            while(ar.size() <= temp)
                ar.add(numTri);
        }
        out.println(ar.get(ent));
    }
}
