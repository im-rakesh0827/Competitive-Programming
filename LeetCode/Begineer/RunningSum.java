import java.util.Arrays;

public class RunningSum {
    public static void main(String[] args) {
        int arr[] = {3, 1, 2, 10, 1};
        int newArr[] = new int[arr.length];
        int sum=0;
        for(int i=0; i<arr.length; i++){
            sum +=arr[i];
            // newArr[i] = sum;
            arr[i] = sum;

        }
        // System.out.println(Arrays.toString(newArr));
        System.out.println(Arrays.toString(arr));
    }
    
}
