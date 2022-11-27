import java.util.Scanner;

public class SpeedLimitTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int A = sc.nextInt();
            int X = sc.nextInt();
            int B = sc.nextInt();
            int Y = sc.nextInt();

            int s1 = (int)A/X;
            int s2 = (int)B/Y;
            // System.out.println(s1+"\n"+s2);
            if(s1>s2) System.out.println("Alice");
            else if(s2>s1) System.out.println("Bob");
            else System.out.println("Equal");
        }
        
    }
    
}

// Link : https://www.codechef.com/SEP221C/problems/SPEEDTEST
