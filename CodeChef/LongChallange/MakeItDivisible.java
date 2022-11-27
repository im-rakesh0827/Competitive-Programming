import java.util.Scanner;

public class MakeItDivisible {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-->0){
            int n = sc.nextInt();
            int num = 1;
            while(n!=1){
                num*=10;
                n--;
            }
            for(int i=num; i<num*10; i++){
                if(i%2!=0){
                    if(i%3==0 && i%9!=0){
                        System.out.println(i);
                        // break;
                    }
                }
            }

        }
    }
    
}


// 100, 101, 102, 