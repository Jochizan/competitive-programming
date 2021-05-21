import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

//public class Solution {
//
//    /*
//     * Complete the simpleArraySum function below.
//     */
//    static int simpleArraySum(final int[] ar) {
//        /*
//         * Write your code here.
//         */
//        int sum = 0;
//        for (int count = 0; count < ar.length; count++) {
//            sum = sum + ar[count];
//        }
//        return sum;
//    }
//
//    private static final Scanner scanner = new Scanner(System.in);
//
//    public static void main(final String[] args) throws IOException {
//        final BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
//
//        final int arCount = Integer.parseInt(scanner.nextLine().trim());
//
//        final int[] ar = new int[arCount];
//
//        final String[] arItems = scanner.nextLine().split(" ");
//
//        for (int arItr = 0; arItr < arCount; arItr++) {
//            final int arItem = Integer.parseInt(arItems[arItr].trim());
//            ar[arItr] = arItem;
//        }
//
//        final int result = simpleArraySum(ar);
//
//        bufferedWriter.write(String.valueOf(result));
//        bufferedWriter.newLine();
//
//        bufferedWriter.close();
//    }
//}
