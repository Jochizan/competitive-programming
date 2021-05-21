//import java.util.*;
//
//public class Canguros {
//
//    //a Complete the kangaroo function below.
//    static String kangaroo(int x1, int v1, int x2, int v2) {
//
//        String Alcanzo = "";
//        if (x1 < x2 && v1 > v2) {
//            if ((x2 - x1) % (v1 - v2) == 0) {
//                Alcanzo = "YES";
//            } else {
//                Alcanzo = "NO";
//            }
//        } else if (x1 > x2 && v2 < v1) {
//            if ((x1 - x2) % (v2 - v1) == 0) {
//                Alcanzo = "YES";
//            } else {
//                Alcanzo = "NO";
//            }
//        } else {
//            Alcanzo = "NO";
//        }
//        return Alcanzo;
//    }
//
//    public static void main(String[] args) {
//
//        Scanner scanner = new Scanner(System.in);
//        String[] x1V1X2V2 = scanner.nextLine().split(" ");
//
//        int x1 = Integer.parseInt(x1V1X2V2[0]);
//
//        int v1 = Integer.parseInt(x1V1X2V2[1]);
//
//        int x2 = Integer.parseInt(x1V1X2V2[2]);
//
//        int v2 = Integer.parseInt(x1V1X2V2[3]);
//
//        String result = kangaroo(x1, v1, x2, v2);
//
//        System.out.println(result);
//    }
//}
