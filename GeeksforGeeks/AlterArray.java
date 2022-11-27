import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class AlterArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int array[] = new int[size];
        for(int i=0; i<size; i++){
            array[i] = sc.nextInt();
        }

        // rearrange(array, size);
        new AlterArray().rearrange1(array, size);
        for(int i=0; i<size; i++){
            System.out.print(array[i]+" ");
        }
        System.out.println();
       
    }
    

    public static void rearrange(int arr[], int n) {
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                pos.add(arr[i]);
            } else
                neg.add(arr[i]);
        }
        int count_pos = 0;
        int count_neg = 0;

        for (int j = 0; j < n; j++) {
            if (count_pos < pos.size() && count_neg < neg.size()) {
                if (j % 2 == 0) {
                    arr[j] = pos.get(count_pos);
                    count_pos++;
                } else {
                    arr[j] = neg.get(count_neg);
                    count_neg++;
                }
            } else if (count_pos >= pos.size() && count_neg < neg.size()) {
                arr[j] = neg.get(count_neg);
                count_neg++;
            } else if (count_neg >= neg.size() && count_pos < pos.size()) {
                arr[j] = pos.get(count_pos);
                count_pos++;
            }
        }
    }





    void rearrange1(int arr[], int n) {
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) pos.add(arr[i]);
            else neg.add(arr[i]);
        }
        int count_pos = 0;
        int count_neg = 0;
        int k = 0;
        while (k < n) {
            if (count_pos < pos.size()) {
                arr[k] = pos.get(count_pos);
                count_pos++;
                k++;
            }
            if (count_neg < neg.size()) {
                arr[k] = neg.get(count_neg);
                count_neg++;
                k++;
            }
        }
    }
    
}
