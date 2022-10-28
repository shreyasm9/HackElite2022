import java.util.Scanner;
class Solution3 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("a = ");
        String a=sc.next();
        System.out.print("b = ");
        String b=sc.next();
        String temp;
        temp=a;
        a=b;
        b=temp;
        System.out.println("a = "+a);
        System.out.println("b = "+b);
        sc.close();
    }
    
}