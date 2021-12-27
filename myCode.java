import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class myCode {
    public static String getElement(String S, int k){
        String smallest = S.substring(S.length()-k, S.length());
        String largest = S.substring(0, k);
        return smallest +"\n"+largest;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        // int start = in.nextInt();
        // int end = in.nextInt();
        // // String s1 = S.substring(start, end);
        // // System.out.println(s1);

        // System.out.println(S.substring(start, end));

        int k = in.nextInt();
        // System.out.println(S.substring(S.length()-k, S.length())+"\n"+S.substring(0, k));

        System.out.println(getElement(S, k));
    }
}