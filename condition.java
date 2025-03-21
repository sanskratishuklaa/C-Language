import java.util.* ;
public class condition{
    public static void main(
        String args[]
    ){
        System.out.println("Enter the age of a person: ");
        Scanner sc= new Scanner(System.in);
        int age=sc.nextInt();
        if(age>18){
            System.out.println("Adult you are eligible to caste a vote");
        }
        else{
            System.out.println("Not adult don't eligible to caste a vote.");
        }

    }
}