public class RemoveDuplicate {
    public static void main(String[] args) {
        int arr[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
        // System.out.println(removeDuplicate(arr));

        int numsArr[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

        System.out.println(removeElement(numsArr, 2));

    }

    public static int removeDuplicate(int A[]) {
        int j = 1;
        for (int i = 0; i < A.length - 1; i++) {
            if (A[i] != A[i + 1]) {
                A[j] = A[i + 1];
                j++;
            }
        }
        return j;
    }

    public static int removeElement(int[] nums, int val) {
        int result = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] != val) {
                result++;
            }
        }
        return result;
    }

}

// Link :
// https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/