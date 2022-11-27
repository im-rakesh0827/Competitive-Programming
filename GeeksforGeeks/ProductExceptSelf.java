// WAP to print array of product of all the elements except self :  
import java.util.*;
public class ProductExceptSelf {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        int i=0;
        while(i!=size){
            arr[i] = sc.nextInt();
            i++;
        }
        System.out.println(Arrays.toString(productExceptSelf(arr, size)));
    }
    public static long[] productExceptSelf(int nums[], int n) {
        long[] newArray = new long[n];
        long prod = 1;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i]!=0) prod*=nums[i];
            else count++;
        }
        for (int i = 0; i < n; i++) {
            if (count>=2) newArray[i]=0;
            else if (count == 1){
                if (nums[i] != 0) newArray[i] = 0;
                else newArray[i] = prod;
            }else newArray[i] = prod / nums[i];
            
        }
        return newArray;
    }
}

