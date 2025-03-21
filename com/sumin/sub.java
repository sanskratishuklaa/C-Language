import java.util.*; 

    
public class sub {
    public static void main(
        String args[]
    ){
        System.out.println("Enter a first number: ");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println("Enter a second number: ");
        int b=sc.nextInt();
        int sub=a-b;
        System.out.println("Subtraction of two number is: ");
        System.out.println(sub);
    }
    
}
