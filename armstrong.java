
//write a program in java to find all armstrong number;
import java.util.*;

public class armstrong {
    public static void main(
            String args[]) {
        int num;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter a number :");
            num = sc.nextInt();
        }
        System.out.println("Entered number is armstrong number : " + isarmstrong(num));

    }

    static boolean isarmstrong(int n) {
        int digits = 0, temp;
        int sum = 0;
        temp = n;
        while (temp > 0) {
            temp = temp / 10;
            digits++;
        }
        System.out.println("number of digits : " + digits);
        temp = n;
        while (temp > 0) {
            int lastDigit = temp % 10;
            sum = (int) (sum + Math.pow(lastDigit, digits));
            temp = temp / 10;
        }
        if (sum == n)
            return true;

        return false;
    }

}