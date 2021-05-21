//import java.io.*;
//import java.math.*;
//import java.security.*;
//import java.text.*;
//import java.util.*;
//import java.util.concurrent.*;
//import java.util.function.*;
//import java.util.regex.*;
//import java.util.stream.*;
//
//import static java.util.stream.Collectors.toList;
//
//class Result {
//
//    /*
//     * Complete the 'getTotalX' function below.
//     *
//     * The function is expected to return an INTEGER.
//     * The function accepts following parameters:
//     *  1. INTEGER_ARRAY a
//     *  2. INTEGER_ARRAY b
//     */
//
//    public static List<Integer> getTotalX(List<Integer> a, List<Integer> b) {
//        // Write your code here
//        int mayor1 = 0, menor2 = 100, cant = 0;
//        for (int i = 0; i < a.size(); i++) {
//            if (mayor1 < a.get(i)) {
//                mayor1 = a.get(i);
//            }
//        }
//        for (int i = 0; i < b.size(); i++) {
//            if (menor2 > b.get(i)) {
//                menor2 = b.get(i);
//            }
//        }
//        List<Integer> guardado1 = new ArrayList<Integer>();
//        List<Integer> guardado2 = new ArrayList<Integer>();
//        for (int i = mayor1; i <= menor2; ++i) {
//            for (int j = 0; j < guardado2.size(); j++) {
//                if (i % a.get(j) == 0 && guardado1.get(i) != i) {
//                    guardado1.add(i);
//                }
//            }
//        }
//        for (int i = mayor1; i <= menor2; ++i) {
//            for (int j = 0; j < b.size(); j++) {
//                for (int k = 0; k < guardado2.size(); k++) {
//                    if (b.get(j) % i == 0 && guardado2.get(j) != i) {
//                        guardado2.add(i);
//                    }
//                }
//            }
//        }
//        if (guardado1.size() < guardado2.size()) {
//            cant = guardado1.size();
//        } else if (guardado1.size() > guardado2.size()) {
//            cant = guardado2.size();
//        } else {
//            cant = guardado2.size();
//        }
//        return guardado2;
//    }
//}
//
//public class EntreDosJ {
//    public static void main(String[] args) throws IOException {
//
//        Scanner scanner = new Scanner(System.in);
//        String[] firstMultipleInput = scanner.nextLine().replaceAll("\\s+$", "").split(" ");
//
//        int n = Integer.parseInt(firstMultipleInput[0]);
//
//        int m = Integer.parseInt(firstMultipleInput[1]);
//
//        List<Integer> arr = Stream.of(scanner.nextLine().replaceAll("\\s+$", "").split(" "))
//                .map(Integer::parseInt)
//                .collect(toList());
//
//        List<Integer> brr = Stream.of(scanner.nextLine().replaceAll("\\s+$", "").split(" "))
//                .map(Integer::parseInt)
//                .collect(toList());
//
//        List<Integer> total = new ArrayList<Integer>();
//        total = Result.getTotalX(arr, brr);
//        System.out.println(total);
//    }
//}
//
//class Solution {
//
//    public static void main(String[] args) {
//        Scanner in = new Scanner(System.in);
//        int n = in.nextInt();
//        int m = in.nextInt();
//        int[] a = new int[n];
//        for (int a_i = 0; a_i < n; a_i++) {
//            a[a_i] = in.nextInt();
//        }
//        int[] b = new int[m];
//        for (int b_i = 0; b_i < m; b_i++) {
//            b[b_i] = in.nextInt();
//        }
//        Arrays.sort(a);
//        Arrays.sort(b);
//        int min = a[0];
//        int max = b[b.length - 1];
//        int count = 0;
//        //System.out.println(max+" "+min);
//        for (int i = min; i <= max; i++) {
//            if (hasFactors(i, a) && isFactor(i, b)) {
//                count++;
//            }
//        }
//        System.out.println(count);
//    }
//
//    public static boolean hasFactors(int num, int[] arr) {
//        for (int i = 0; i < arr.length; i++) {
//            if (num % arr[i] != 0) {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    public static boolean isFactor(int num, int[] arr) {
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] % num != 0) {
//                return false;
//            }
//        }
//        return true;
//    }
//}
