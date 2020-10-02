import java.io.*;
import java.util.*;
import java.time.DayOfWeek;
public class Q19CountingSundays {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scanner = new Scanner(System.in);
        int testCases = scanner.nextInt();
        do{
             int sundays = 0;
            Calendar c = Calendar.getInstance();
            int monthStart,dateStart,monthEnd,dateEnd;
            int yearStart,yearEnd;
            yearStart = scanner.nextInt();
            monthStart = scanner.nextInt();
            dateStart = scanner.nextInt();
            yearEnd = scanner.nextInt();
            monthEnd = scanner.nextInt();
            dateEnd = scanner.nextInt();
            String[] getDayOfWeek = new String[]{
                    "MONDAY",
                    "TUESDAY",
                    "WEDNESDAY",
                    "THURSDAY",
                    "FRIDAY",
                    "SATURDAY",
                    "SUNDAY"
            };
            for(int y = yearStart; y<=yearEnd; y++) {
                for(int m = monthStart; m<=12; m++) {
                    c.set(y,m-1,1);
                    if(String.valueOf(getDayOfWeek[c.get(Calendar.DAY_OF_WEEK)-1]).equals(String.valueOf(DayOfWeek.SUNDAY))) {
                        sundays++;
                    }
                    if(m > monthEnd && y == yearEnd)
                        break;
                }
            }
            System.out.println(sundays);
            testCases--;
        }while(testCases != 0 && testCases>=1 && testCases<=100);

    }
}
