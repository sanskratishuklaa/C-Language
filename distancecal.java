//Assume a suitable value for distance between two cities(in km).Write a java program to convert and 
//print this distance in meters, feet, inches and centimetres;
import java.util.Scanner;
@SuppressWarnings("unused")
public class distancecal {
    public static void main(
        String args[]
    ){
        double distanceInkm=150;
        //convert the distance to different units
        double distanceInmetres=distanceInkm*1000;
        double distanceInfeet=distanceInkm*3280.84;
        double distanceIninches=distanceInkm*39370.1;
        double distanceIncentimetres=distanceInkm*100000;

        //Display the results;
        System.out.println("Distance in km:" +distanceInkm);
        System.out.println("Distance in metres:"+distanceInkm+)  
    
    
    
    
    }
}
