import static java.lang.System.out;

public class Q21AmicableNumbers {

    static int ans = 0;

    static int sumDiv(int n) {
        int sum = 0;
        for(int i = 1; i <= n/2; ++i)
            if(n % i == 0)
                sum += i;
        return sum;
    }

    public static void main(String[] args) {
        for(int i = 220; i <= 10000; ++i)
            if(sumDiv(sumDiv(i)) == i && sumDiv(i) != i)
                ans += i;
        out.println(ans);
    }
}
// Otra forma de resolver el mismo problema con un tiempo de ejecución más corto
class Main {
    public static int sumFactors(int n){
        int sum = 1;
        int i = 2;
        for(; i * i < n; i++){
            if(n%i==0){
                sum+=i+n/i;
            }
        }
        if(i*i==n)sum+=i;
        return sum;
    }
    public static void main(String[] args) {
        int sum = 0;
        for(int i = 1;i <= 10000; i++){
            int j = sumFactors(i);
            if(j !=i&& j <= 10000) {
                if (sumFactors(j) == i) {
                    sum += i;
                }
            }
        }
        System.out.println(sum);
    }
}
