import static java.lang.System.out;

public class Q4Palindrom {

    static int ans = 0, n;

    public static void solve() {
        int i, j;
        for(i = n; i >= 100; --i)
            for(j = n; j >= 100; --j)
                if(pal(i * j))
                    if(ans < i * j)
                        ans = i * j;
        print(str(ans));
    }
    
    static String str(int n) {
        return Integer.toString(n);
    }
    
    static boolean pal(int n) {
        String ans = str(n);
        String inv = "";
        for(int i = ans.length() - 1; i >= 0; --i)
            inv += ans.charAt(i);
        return (inv.equals(ans))?true:false;
    }
    static void print(String s) {
        out.println(s); 
    }

    public static void main(String[] args) {
        n = 999;
        solve();
        print("Finish");
    }
}
