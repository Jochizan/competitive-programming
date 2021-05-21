import java.util.*;

public class Utopian_Tree {

    private static Scanner in = new Scanner(System.in);

    private static int solve() {
        int n = in.nextInt();
        int initial = 1;

        for (int i = 0; i < n; ++i) {

            if (i % 2 == 0) {
                initial *= 2;
            } else {
                initial++;
            }
        }
        return initial;
    }

    public static void main(String[] args) {
        int t = in.nextInt();

        for (int i = 0; i < t; ++i) {
            System.out.println(solve());
        }
    }
}