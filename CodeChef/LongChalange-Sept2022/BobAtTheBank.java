import java.util.Scanner;

public class BobAtTheBank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int w =sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();

            int ans = w+x*z-y*z;
            System.out.println(ans);
        }
    }
    
}

// Link : https://www.codechef.com/SEP221C/problems/BOBBANK?tab=statement
