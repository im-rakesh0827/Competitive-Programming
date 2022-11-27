public class RemoveDuplicate {
    public static void main(String[] args) {
        int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        System.out.println(removeDuplicate(arr));

    }


    public static int removeDuplicate(int A[]){
        int j=1;
        for(int i=0; i<A.length-1; i++){
            if(A[i]!=A[i+1]){
                A[j] = A[i+1];
                j++;
            }
        }
        return j;
    }
    
}


// Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/