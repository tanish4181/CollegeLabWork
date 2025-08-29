import java.util.*;

public class ArrithmeticOperation {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        char op;
        double num1;
        double num2;
        double result = 0;

        System.out.println("Enter the value of num1");
        num1 = scanner.nextInt();

        System.out.println("Enter the value of num2");
        num2 = scanner.nextInt();

        System.out.println("Enter operator (+,-,*,/):");
        op = scanner.next().charAt(0);
        switch (op) {

            case '+' ->
                result = num1 + num2;
            case '-' ->
                result = num1 - num2;
            case '*' ->
                result = num1 * num2;
            case '/' ->
                result = num1 / num2;

        }
        System.out.println("Result: " + result);
        scanner.close();
    }
}
