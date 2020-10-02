import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the miniMaxSum function below.
    static void miniMaxSum(int[] arr) {
	
	for(int i = 0; i < arr.length; i++){
	  if(arr[i]>=1 && arr[i]<=1000000000){
	  }else {
	    System.exit(0);
	  }
	}
	int mayor=1,menor=1000000000;
	for(int i = 0; i < arr.length; i++){
	  if(arr[i]>=mayor){

		mayor = arr[i];
	  }
	  if(arr[i]<=menor){
	    	menor = arr[i];
	  }
	}
	long sumMayor=0, sumMenor=0;
	for(int i = 0; i < arr.length; i++){
		sumMayor+=arr[i];
		sumMenor+=arr[i];
	}
	sumMayor = sumMayor-menor;
	sumMenor = sumMenor-mayor;
	System.out.println(sumMenor+ " " + sumMayor);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[] arr = new int[5];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 5; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        miniMaxSum(arr);

        scanner.close();
    }
}
