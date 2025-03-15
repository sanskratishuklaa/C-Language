//Write java program to compute quotient and remainder;

import java.util.Scanner;

public class practice {
    public static void main(
            String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter dividend: ");
            int dividend = sc.nextInt();
            System.out.println("Enter Divisor: ");
            int divisor = sc.nextInt();
            int quotient = dividend / divisor;
            int remainder =dividend%divisor;
            System.out.println("quotient = " + quotient);
            System.out.println("remainder = " +remainder);
        }

    }
}