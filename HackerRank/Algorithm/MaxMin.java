import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class MaxMin {

    static int[] breakingRecords(int[] scores) {

        int vuelta[] = new int[2];
        int[] comp = new int[2];
        comp[0]=scores[0];
        comp[1]=scores[0];
        for(int i = 0; i < scores.length; ++i){
            if(i < scores.length-1){
                if (scores[i+1]>comp[0]) {
                    vuelta[0]++;
                    comp[0]=scores[i+1];
                }else if(scores[i+1]<comp[1]){
                    vuelta[1]++;
                    comp[1]=scores[i+1];
                }
            }
        }
    return vuelta;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] scores = new int[n];

        String[] scoresItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int scoresItem = Integer.parseInt(scoresItems[i]);
            scores[i] = scoresItem;
        }

        int[] result = breakingRecords(scores);

        for (int i = 0; i < result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write(" ");
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
