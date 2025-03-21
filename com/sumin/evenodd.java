import java.util.*;

public class evenodd {
    public static void main(String args[]) {
        System.out.println("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (num % 2 == 0) {
            System.out.println("Entered number is Even.");
        } else {
            System.out.println("Entered number is odd.");
        }

    }

}
