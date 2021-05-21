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
//     * Complete the 'gradingStudents' function below.
//     *
//     * The function is expected to return an INTEGER_ARRAY.
//     * The function accepts INTEGER_ARRAY grades as parameter.
//     */
//
//    public static List<Integer> gradingStudents(List<Integer> grades) {
//        // Write your code here
//        List<Integer> listFinal = new ArrayList<Integer>(grades.size());
//        if (grades.size() >= 1 && grades.size() <= 60) {
//            for (int i = 0; i < grades.size(); i++) {
//                if (grades.get(i) <= 100 && grades.get(i) >= 0) {
//
//                } else {
//                    System.exit(0);
//                }
//            }
//            for (int i = 0; i < grades.size(); i++) {
//                if (grades.get(i) > 34) {
//                    if (grades.get(i) % 5 == 3) {
//                        listFinal.add(i, grades.get(i) + 2);
//                    } else if (grades.get(i) % 5 == 4) {
//                        listFinal.add(i, grades.get(i) + 1);
//                    } else {
//                        listFinal.add(i, grades.get(i));
//                    }
//                } else {
//                    listFinal.add(i, grades.get(i));
//                }
//            }
//        }
//        return listFinal;
//    }
//}
//
//public class Prueba1 {
//
//    public static void main(String[] args) throws IOException {
//
//        Scanner entrada = new Scanner(System.in);
//        int n = entrada.nextInt();
//        List<Integer> grades = new ArrayList<Integer>(n);
//        for (int i = 0; i < grades.size(); i++) {
//        }
//    }
//}
