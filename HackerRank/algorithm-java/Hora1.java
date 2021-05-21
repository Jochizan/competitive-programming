//import java.io.*;
//import java.math.*;
//import java.text.*;
//import java.util.*;
//import java.util.regex.*;
//
//public class Hora1 {
//    /*
//     * Complete the timeConversion function below.
//     */
//    static String timeConversion(String s) {
//        String hora = "", PrimerHora = "", SegundaHora = "", TerceraHora = "";
//        int convertidor;
//        if (String.valueOf(s).charAt(8) == 'A') {// 07:05:45 PM
//            PrimerHora = s.substring(0, 2);// 19:05:45
//            SegundaHora = s.substring(3, 5);
//            TerceraHora = s.substring(6, 8);
//            if (PrimerHora.equals("12")) {
//                PrimerHora = "00";
//            }
//        } else if (String.valueOf(s).charAt(8) == 'P') {
//            PrimerHora = s.substring(0, 2);
//            SegundaHora = s.substring(3, 5);
//            TerceraHora = s.substring(6, 8);
//            if (PrimerHora.equals("12")) {
//                PrimerHora = PrimerHora;
//            } else {
//                convertidor = Integer.parseInt(PrimerHora);
//                convertidor = convertidor + 12;
//                PrimerHora = Integer.toString(convertidor);
//            }
//        }
//        hora = PrimerHora + ":" + SegundaHora + ":" + TerceraHora;
//        return hora;
//    }
//
//    private static final Scanner scan = new Scanner(System.in);
//
//    public static void main(String[] args) throws IOException {
//        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
//        String s = scan.nextLine();
//        String result = timeConversion(s);
//        bw.write(result);
//        bw.newLine();
//        bw.close();
//    }
//}
