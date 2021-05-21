import java.util.*;

public class La_carrera_de_obst_culos {

    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {

        int n = in.nextInt(), k = in.nextInt(), max = 0, tmp;
        int[] arr = new int[n];

        for (int i = 0; i < n; ++i) {
            tmp = in.nextInt();
            if (tmp > max) {
                max = tmp;
            }
        }
        System.out.println(max > k ? max - k : 0);
    }
}