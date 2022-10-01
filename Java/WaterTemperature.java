import java.util.Scanner;

public class WaterTemperature {
    public static void main(String[] args){
        

        //formula
        int T;

        //program
        
        System.out.println("Temperature (degree. Celcius) = ");

        //input degree
        Scanner scanner = new Scanner(System.in);
        T = scanner.nextInt(); //input water degree

        //check
        if (T < 0) {
            System.out.println("freeze " +T);
        } else if ((0 <= T) && (T <= 100)) {
            System.out.println("liquid " +T);
        } else if (T > 100) {
            System.out.println("steam " +T);
        }
    }
}
