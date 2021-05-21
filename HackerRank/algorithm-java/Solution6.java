
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

//public class Solution {
//
//	// Complete the staircase function below.
//	static void staircase(int n) {
//
//		if (n > 0 && n <= 100) {
//			String array[][] = new String[n][n];
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (i + j < array.length - 1) {
//						array[i][j] = " ";
//					} else {
//						array[i][j] = "#";
//					}
//				}
//			}
//
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//
//					System.out.print(array[i][j]);
//				}
//				System.out.println();
//			}
//		}
//	}
//
//	private static final Scanner scanner = new Scanner(System.in);
//
//	public static void main(String[] args) {
//		int n = scanner.nextInt();
//		scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
//
//		staircase(n);
//
//		scanner.close();
//	}
//}
