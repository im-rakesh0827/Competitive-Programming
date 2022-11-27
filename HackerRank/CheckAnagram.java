import java.util.Scanner;

public class CheckAnagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        boolean result = isAnagram(str1, str2);
        System.out.println((result)? "Anagram" : "Not Anagram");
        sc.close();

    }
    public static boolean isAnagram(String s1, String s2) {
        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();
        boolean flag = false;
        if(s1.length()!=s2.length()) return flag;


        char arr1[] = s1.toCharArray();
        for(int i=0; i<arr1.length; i++){
            for(int j=i+1; j<arr1.length; j++){
                if(arr1[i]>arr1[j]){
                    char temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        s1 = new String(arr1);
        char arr2[] = s2.toCharArray();
        for(int i=0; i<arr2.length; i++){
            for(int j=i+1; j<arr2.length; j++){
                if(arr2[i]>arr2[j]){
                    char temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
        s2 = new String(arr2);
        if(s1.equals(s2)) flag = true;
        return flag;
    }
    
}


