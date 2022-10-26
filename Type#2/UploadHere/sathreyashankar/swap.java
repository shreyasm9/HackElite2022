import java.util.Scanner;
class swap{
    public static void main(String[] args) {
        String a = new String();
        String b = new String();
        String c = new String();
        Scanner s = new Scanner(System.in);

        System.out.println("Enter first input : ");
        a = s.nextLine();
        System.out.println("Enter second input of the same type as first input : ");
        b = s.nextLine();
        System.out.println("Before swapping: a = "+a+", b = "+b);
        c= a;
        a = b;
        b = a;
        System.out.println("After swapping: a = "+a+", b = "+b);
        s.close();    
    }
}