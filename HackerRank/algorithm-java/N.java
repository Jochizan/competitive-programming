//import java.io.*;
//import java.util.*;
//
//public class N {
//
//    public static void main(String[] args) {
//        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
//        Scanner scanner = new Scanner(System.in);
//        int n = scanner.nextInt();
//        int array1[] = new int[n];
//        int array2[] = new int[n];
//        double mult = 0, div = 0;
//        for (int i = 0; i < n; ++i) {
//            array1[i] = scanner.nextInt();
//        }
//        for (int i = 0; i < n; ++i) {
//            array2[i] = scanner.nextInt();
//        }
//        for (int i = 0; i < n; ++i) {
//            mult = (double) array1[i] * (double) array2[i] + mult;
//        }
//        for (int i = 0; i < n; ++i) {
//            div += (double) array2[i];
//        }
//        mult = mult / (div);
//        System.out.print(fijarNumero(mult, 1));
//    }
//
//    public static double fijarNumero(double numero, int digitos) {
//        double resultado;
//        resultado = numero * Math.pow(10, digitos);
//        resultado = Math.round(resultado);
//        resultado = resultado / Math.pow(10, digitos);
//        return resultado;
//    }
//}