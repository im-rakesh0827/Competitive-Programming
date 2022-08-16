import java.util.Scanner;
public class ATeam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int count=0;
       while(t>0){
           int a, b, c;
           a = sc.nextInt();
           b = sc.nextInt();
           c = sc.nextInt();
           if(a+b+c>=2){
               count++;
           }
           t--;

        }
        System.out.println(count);
        
    }
    
}
