import java.util.*;

public class Designer_PDF_Viewer {

    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {
        HashMap<Character, Integer> map = new HashMap<>();
        int tmp, max = 0;
        char key = 'a';
        char[] letters;
        String word;

        for (int i = 0; i < 26; i++) {
            tmp = in.nextInt();
            map.put(key, tmp);
            key++;
        }

        word = in.next();
        letters = word.toCharArray();

        for (int i = 0; i < letters.length; i++) {
            if (map.get(letters[i]) > max) {
                max = map.get(letters[i]);
            }
        }

        System.out.println(letters.length * max);
    }
}