import com.google.common.primitives.Ints;
import java.lang.*;
import java.util.List;
import java.io.*;
import java.util.*;
class PowerSum{
    public static int power(int p){
        p=p-1;
        while((p&p-1)!=0){
            p=p&p-1;
        }
        return p<<1;
    }
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];
            int d[] = new int[n];
            int sum=0;
            for(int i=0; i<n; i++){
                arr[i] = sc.nextInt();
                d[i] = arr[i];
                sum=sum+arr[i];
            }
            int m=0;
            Arrays.sort(d);
                m=power(sum);
            int min = d[0];
            sum = sum-min;
            int ans = sum;
            int c = (m-sum)/min;
            if(c==1){
                System.out.println("0");
            }else{
                System.out.println("1");
                System.out.println("1 "+c);
                int index=Ints.indexOf(arr, min);
                System.out.println(index+1);
            }
        }
    }
}