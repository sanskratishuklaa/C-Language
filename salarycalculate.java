import java.util.Scanner;
public class salarycalculate {
    //Assume a suitable value for Ramesh's basic salary. His dearness allowance is 40% of basic salary, and house rent
    //allowance is 20% of basic salary. Write a Java program to calculate his gross salary;
    @SuppressWarnings("resource")
    public static void main(
        String args[]
    ){
        Scanner scanner= new Scanner(System.in);
        double basicSalary=50000;
        double dearnessAllowance= 0.40*basicSalary;
        double houserentAllowance= 0.20*basicSalary;
        double grossSalary=basicSalary+dearnessAllowance+houserentAllowance;
        //Display the result;
        System.out.println("Ramesh's Basic Salary:" +basicSalary);
        System.out.println("DearnessAllowance(40% of Basic salary):" +dearnessAllowance);
        System.out.println("houserentAllowance(20% of Basic salary):" +houserentAllowance);
        System.out.println("grossSalary:" +grossSalary);
        scanner.close();


    }
}
