import java.util.*;
public class sum {
    @SuppressWarnings({ "unused", "resource" })
    public static void main(
            String args[]) {
            System.out.println("Enter the two numbers: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = a + b;
        System.out.println(sum);
    }
}