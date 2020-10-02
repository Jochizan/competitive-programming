import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q9SpecialTriplet {

    static long a, b, c;
    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        for(c = 1000; c > 2; --c)
            for(b = c - 1; b > 1; --b)
                for(a = b - 1; a > 0; --a)
                    if(a + b + c == 1000 && a*a + b*b  == c*c)
                        out.println(a * b * c);
    }
}
