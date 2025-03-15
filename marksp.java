//Assume suitable values for marks obtained by a student in five different subjects are inputs through the keyboard.
//Write a java program to find out the aggregate marks and percentage marks obtained by the student.Assume that the
//maximum marks that can be obtained by a student in each subject is 100;

import java.util.Scanner;

public class marksp {
      public static void main( 
        String args[]
      ){
        Scanner scanner= new Scanner(System.in);
         int maximumMarks=500;
        int num1=77,num2=89,num3=93,num4=87,num5=59;
        int aggregateMarks=num1+num2+num3+num4+num5;
        double percentage=aggregateMarks/5;
        //Display the result;
        System.out.println("Maximum marks: " +maximumMarks);
        System.out.println("AggregateMarks obtained by student: " +aggregateMarks);
        System.out.println("Percentage obtained by the Student: " +percentage);
        scanner.close();
      }

}
