import java.util.*;

import javax.swing.text.AbstractDocument.Content;
public class NextRound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int []arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        int temp = arr[k-1];
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]>=temp && arr[i]!=0 ){
                count++;
            }

        }
        System.out.println(count);
        
    }

}
