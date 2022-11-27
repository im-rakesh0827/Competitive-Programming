import java.util.Arrays;
import java.util.Scanner;

class RotateArray{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 4 3 2 1 7 6 5 
        // 5 6 7 1 2 3 4

        int size = sc.nextInt();
        int arr[] = new int[size];
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        k = k%arr.length;
        int ans[] = rotateArray(arr, k);
        System.out.println(Arrays.toString(ans));
    }
    
    public static int[] rotateArray(int arr[], int k){
        int n = arr.length;
        reverse(arr, 0, n-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
        return arr;
    }

    public static void reverse(int A[], int low, int high){
        while(low<high){
            int temp = A[low];
            A[low] = A[high];
            A[high] = temp;
            low++;
            high--;
        }
    }

}