import java.io.*;
import java.util.*;

public class Medidas {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int array[] = new int[n];

        for(int i = 0; i < n; ++i){
            array[i] = in.nextInt();
        }
        double suma=0, mediana=0, media=0;
	int moda=0;
        for(int i = 0; i < n; ++i){
            suma+=(double)array[i];
        }
        media=suma/(double)n;
	Arrays.sort(array);
        if(n%2==0){
            mediana=(array[n/2-1]+array[n/2])/2.0;
        }else{
            mediana=array[n/2];
        }
        int comparador, contador=0, count=0;
	int array2[] = new int[n];
        for(int i = 0; i < n; ++i){
            comparador=array[i];
            contador=0;
            for(int j = 0; j < n; ++j){
                if(comparador==array[j]){
                    contador++;

                }
            }
            array2[i]=contador;
            comparador=0;
        }

        for(int i = 0; i < n; ++i){
            if(moda<array2[i]){
                moda=array[i];
		count=array2[i];
            }
        }
	if(count==1){
	   moda=100000;
	   for(int i = 0; i < n; ++i){
	       if(moda > array[i]){
	           moda=array[i];
	       }
	   }
	}
        System.out.print(media + "\n" + mediana + "\n" + moda);
    }
}
