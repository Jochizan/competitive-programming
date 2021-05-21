package HackerRank.java;

import java.util.*;

import static java.lang.System.out;

public class JavaEndFile {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i = 0;
        while (in.hasNextLine()) {
            String ans = in.nextLine();
            out.println((i + 1) + " " + ans);
            ++i;
        }
    }
}
