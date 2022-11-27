import java.util.Scanner;

public class ChefAndWireFrame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int x = sc.nextInt();
            int ans = 2*(n+m)*x;
            System.out.println(ans);
        }
        
    }
    
}

// Link : https://www.codechef.com/SEP221C/problems/CWIREFRAME