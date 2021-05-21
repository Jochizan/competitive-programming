import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;

import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

//class Result {
//
//    /*
//     * Complete the 'diagonalDifference' function below.
//     *
//     * The function is expected to return an INTEGER. The function accepts
//     * 2D_INTEGER_ARRAY arr as parameter.
//     */
//
//    public static int diagonalDifference(List<List<Integer>> arr) {
//        // Write your code here
//        int result = 0;
//
//        for (int i = 0; i < arr.size(); i++) {
//            for (int j = 0; j < arr.get(i).size(); j++) {
//                if (arr.get(i).get(j) >= -100 && arr.get(i).get(j) <= 100) {
//                } else {
//                    System.exit(0);
//                }
//            }
//        }
//        int sumDiaP = 0, sumDiaS = 0;
//        for (int i = 0; i < arr.size(); i++) {
//            for (int j = 0; j < arr.get(i).size(); j++) {
//                if (i == j) {
//                    sumDiaP += arr.get(i).get(j);
//                }
//                if (i + j == arr.size()) {
//                    sumDiaS += arr.get(i).get(j);
//                }
//            }
//        }
//        result = Math.abs(sumDiaP - sumDiaS);
//        return result;
//    }
//}
//
//public class Solution4 {
//    public static void main(String[] args) throws IOException {
//        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
//
//        int n = Integer.parseInt(bufferedReader.readLine().trim());
//
//        List<List<Integer>> arr = new ArrayList<>();
//
//        IntStream.range(0, n).forEach(i -> {
//            try {
//                arr.add(Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" ")).map(Integer::parseInt)
//                        .collect(toList()));
//            } catch (IOException ex) {
//                throw new RuntimeException(ex);
//            }
//        });
//
//        int result = Result.diagonalDifference(arr);
//
//        bufferedWriter.write(String.valueOf(result));
//        bufferedWriter.newLine();
//
//        bufferedReader.close();
//        bufferedWriter.close();
//    }
//}