import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution5 {

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr) {

        int countPos = 0, countNeg = 0, countZero = 0;
        double proporPos = 0, proporNeg = 0, ProporZero = 0;

        if (arr.length < 101 && arr.length > 0) {

            for (int i = 0; i < arr.length; i++) {
                if (arr[i] > 0 && arr[i] <= 100) {
                    countPos++;
                } else if (arr[i] < 0 && arr[i] >= -100) {
                    countNeg++;
                } else if (arr[i] == 0) {
                    countZero++;
                } else {
                    System.out.println("Error");
                    System.exit(0);
                }
            }
        }
        proporPos = (double) countPos / (double) arr.length;
        proporNeg = (double) countNeg / (double) arr.length;
        ProporZero = (double) countZero / (double) arr.length;

        double[] Imprimir = new double[3];
        Imprimir[0] = proporPos;
        Imprimir[1] = proporNeg;
        Imprimir[2] = ProporZero;

        for (double d : Imprimir) {
            System.out.println(d);
        }
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        plusMinus(arr);

        scanner.close();
    }
}