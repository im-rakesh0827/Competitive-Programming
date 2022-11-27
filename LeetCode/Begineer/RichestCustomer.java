import java.util.Scanner;

public class RichestCustomer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int arr[][] = new int[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                arr[i][j] = sc.nextInt();
            }
        }

        
        // int max = Integer.MIN_VALUE;
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j=0; j<m; j++){
        //         sum+=arr[i][j];
        //     }
        //     max = Math.max(max, sum);
        // }
        // System.out.println(max);






        System.out.println("Max Wealth : "+maxWealth(arr));
    }

    public static int maxWealth(int arr[][]){
        int max = 0;
        for(int []customer: arr){
            int sum = 0;
            for(int money:customer){
                sum+=money;
            }
            max = Math.max(max, sum);
        }
        return max;
    }
    
}
