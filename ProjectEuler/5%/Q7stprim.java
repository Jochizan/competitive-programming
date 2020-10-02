import java.io.*;
import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q7stprim {

    static int n;
    static int ans = 2;
    private static Scanner in = new Scanner(System.in);

    static void solve() {
        int cont = 0;
        boolean ok = true;
        while(ok) {
            if(esPrimo(ans))
                cont++;
            if(cont == n)
                break;
            ans++;
        }
        out.println(ans);
    }

    static boolean esPrimo(int numero){
        int contador = 2;
        boolean primo = true;
        while ((primo) && (contador != numero)){
            if (numero % contador == 0)
                primo = false;
            contador++;
        }
        return primo;
    }

    public static void main(String[] args) {
        n = 10001;
        solve();
    }
}
