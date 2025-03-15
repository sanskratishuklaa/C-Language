import java.util.Scanner;

public class text {
    public static void main(
        String args[]
    ){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the Text: ");
            @SuppressWarnings("unused")
            String text=sc.nextLine();
            System.out.println("text:" = +text);
            sc.close();
        }
        
    }
    
}
