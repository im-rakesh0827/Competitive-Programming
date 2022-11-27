import java.lang.annotation.Retention;
import java.util.Scanner;

public class ReverseInteger {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(reverseInt(n));

    }

    
    public static int reverseInt(int x) {
        int max = Integer.MAX_VALUE;
        int min = Integer.MIN_VALUE;
        long rev=0;
        if(x>=max|| x<=min) return 0;
        if(x>0){
            // while(x!=0){
            //     int rem = x%10;
            //     rev=rev*10+rem;
            //     // if(rev>=max|| rev<=min) return 0;
            //     x/=10;
            // }

            rev = reverse(x);

        }else{
            // x = -1*x;
            // while(x!=0){
            //     rev = rev*10+x%10;
            //     // if(rev>=max|| rev<=min) return 0;
            //     x/=10;
            // }

            rev = reverse(-1*x);
            rev = -1*rev;
        }
        if(rev>=max|| rev<= min) return 0;
        return (int)rev;
    }


    public static long reverse(int num){
        long rev = 0;
        while(num!=0){
            rev = rev*10+num%10;
            num/=10;
        }
        return rev;
    }
   
}
