import java.util.Scanner;
import java.util.Stack;

public class Climbing_the_Leaderboard {

    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {

        long n = in.nextLong(), m, i, tmp;

        Stack<Long> scores = new Stack<>();
        for (i = 0; i < n; ++i) {
            tmp = in.nextLong();
            if (scores.empty() || scores.peek() != tmp) {
                scores.add(tmp);
            }
        }

        m = in.nextLong();
        for (i = 0; i < m; ++i) {
            tmp = in.nextLong();

            while (!scores.empty() && tmp >= scores.peek()) scores.pop();

            System.out.println(scores.size() + 1);
        }
    }
}