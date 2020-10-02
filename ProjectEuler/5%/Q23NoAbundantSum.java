import java.util.*;
import java.math.*;
import static java.lang.System.out;

public class Q23NoAbundantSum {

    static ArrayList<Integer> ans = new ArrayList<Integer>();
    static ArrayList<Integer> ens = new ArrayList<Integer>();

    static int sumDiv(int n) {
        int sum = 0;
        for(int i = 1; i <= n/2; ++i)
            if(n % i == 0)
                sum += i;
        return sum;
    }

    public static void main(String[] args) {
        int n = 28123;
        long sum = n * (n + 1) / 2;
        long sumA = 0;
        for(int i = 1; i <= 28123; ++i)
            if(sumDiv(i) > i)
                ans.add(i);
        for(int i = 0; i < ans.size() - 1; ++i) {
            for(int j = i + 1; j < ans.size(); ++j) {
                int temp = ans.get(i) + ans.get(j);      
                if(temp <= 28123)
                    if(ens.indexOf(temp) == -1)
                        ens.add(temp);
            }
        }
        for(int i = 0; i < ens.size(); ++i) {
            sumA += ens.get(i);
            out.println(sumA);
        }
        out.println(sum - sumA);
    }
}