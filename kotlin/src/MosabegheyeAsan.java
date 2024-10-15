import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class MosabegheyeAsan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int Birthdate = scanner.nextInt();
        int chosenNumber = scanner.nextInt();
        double factorial = 1;
        int result = 0;
        int untilBirthdate = Birthdate;
        for (int i = 0; i < untilBirthdate; i++) {
            factorial *= Birthdate;
            Birthdate--;
        }
//        System.out.println(factorial);
        double k = 0;
        while (factorial>0){
            k = factorial%10;
            if(k == chosenNumber){
                result++;
            }
            factorial/=10;
        }
        System.out.print(result);
    }

}
