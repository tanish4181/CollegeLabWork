import java.util.*;

public class Array {
    public static void main(String args[]) {
        

        int arr1[][] = new int[10][10];
        int arr2[][] = new int[10][10];
        int arr3[][] = new int[10][10];

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter values for array1 (3x3):");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter values for array2 (3x3):");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr2[i][j] = sc.nextInt();
            }
        }

        System.out.println("\nThe Addition of array1 and array2 is:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
                System.out.print(arr3[i][j] + "\t"); // tab for neat formatting
            }
            System.out.println();
        }

        sc.close(); // close scanner
    }
}
