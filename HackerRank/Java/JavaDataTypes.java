import java.util.*;
import static java.lang.System.out;

class JavaDataTypes {

    public static void main(String []argh) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int i = 0; i < t; ++i) {
            try {
                long x = sc.nextLong();
                out.println(x+" can be fitted in:");
                if(x >= -128 && x <= 127)
                    out.println("* byte");
                if(x >= -32768 && x <= 32767)
                    out.println("* short");
                if(x >= Math.pow(-2, 31) && x <= Math.pow(2, 31) - 1)
                    out.println("* int");
                if(x >= Math.pow(-2, 63) && x <= Math.pow(2, 63) - 1)
                    out.println("* long");
                //Complete the code
            } catch(Exception e) {
                out.println(sc.next()+" can't be fitted anywhere.");
            }
        }
    }
}
