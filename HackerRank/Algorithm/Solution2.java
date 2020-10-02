import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import javax.security.auth.login.AccountNotFoundException;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution2 {

    // Complete the compareTriplets function below.
    static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {

        int contador1 = 0, contador2 = 0;
        for (int i = 0; i < a.size(); i++) {

            if (a.get(i) >= 0 && a.get(i) <= 100 && b.get(i) >= 0 && b.get(i) <= 100) {

            } else {
                System.out.println("Error");
            }
        }
        List<Integer> listFinal = new ArrayList<Integer>(2);
        for (int j = 0; j < a.size(); j++) {

            if (a.get(j) > b.get(j)) {
                contador1++;
            } else if (a.get(j) == b.get(j)) {
            } else {
                contador2++;
            }
        }
        listFinal.add(0, contador1);
        listFinal.add(1, contador2);
        return listFinal;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" ")).map(Integer::parseInt)
                .collect(toList());

        List<Integer> b = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" ")).map(Integer::parseInt)
                .collect(toList());

        List<Integer> result = compareTriplets(a, b);

        bufferedWriter.write(result.stream().map(Object::toString).collect(joining(" ")) + "\n");

        bufferedReader.close();
        bufferedWriter.close();
    }
}
