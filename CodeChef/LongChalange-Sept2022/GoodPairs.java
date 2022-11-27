import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class GoodPairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int count=0;
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0; i<n; i++){
                arr[i] = sc.nextInt();
            }
            long ans = 0;
            Map<Integer, Integer>hmap = new HashMap<>();
            for(int i=0; i<n; i++){
                ans+=hmap.getOrDefault(arr[i], 0);
                hmap.put(arr[i], hmap.getOrDefault(arr[i], 0)+1);
            }
            System.out.println(ans);
        }
    }

    // public static int gcd(int a, int b){
    //     int min = Math.min(a, b);
    //     int result = 0;
    //     for(int i=min; i>=1; i--){
    //         if(a%i==0 && b%i==0){
    //             result = i;
    //             break;
    //         }
    //     }
    //     return result;
    // }

    // public static int lcm(int a, int b){
    //     return a*b/gcd(a, b);
    // }
    
}


// Link : https://www.codechef.com/SEP221C/problems/EQPAIR
