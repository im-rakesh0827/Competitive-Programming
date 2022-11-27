// WAP to print how many pairs are palindrome are there in the given array of string :
import java.util.*;
public class PalindromePairString {
    	public static void main(String[] args) {
	   String str[] = {"geekf", "geeks", "or","keeg", "abc", "bc"};
	   //String str[] = {"abc", "xyxcba", "geekst", "or", "bc"};
	   int n = str.length;
	   ArrayList<String> alist = new ArrayList<>();
	   for(int i=0; i<n; i++){
	       for(int j=i+1; j<n; j++){
	           alist.add(str[i]+str[j]);
	       }
	   }
	   System.out.println(countPair(alist));

       mapStringComb(alist);
	}
	public static int countPair(ArrayList<String> alist){
	   int count=0;
	   int size = alist.size();
	   for(int i=0; i<size; i++){
	       String s = alist.get(i);
	       if(isPalindrome(s)){
	        count++;
	       }
	   }
	   return count;
	}
	public static boolean isPalindrome(String S){
	    int N = S.length();
	    String rev = "";
	    boolean flag = false;
	    for(int i=0; i<N; i++){
	        char ch = S.charAt(i);
	        rev = ch+rev;
	    }
	    if(rev.equals(S)){
	        flag = true;
	    }
	    return flag;
	}

    public static void mapStringComb(ArrayList<String> aList){
        Map<String, Integer> tMap = new TreeMap<>();
        int size = aList.size();
        int i=0;
        while(i!=size){
            if(tMap.containsKey(aList.get(i))==false) tMap.put(aList.get(i), 1);
            else tMap.put(aList.get(i), tMap.get(aList.get(i))+1);
            i++;
        }

        // for(Map.Entry data:tMap.entrySet()){
        //     System.out.println(data.getKey()+" "+data.getValue());
        // }

        tMap.forEach((k,v)->System.out.println(k+"   :   "+v));
    }
}

