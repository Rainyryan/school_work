package ProgramDesignII.Homeworks;

import java.util.Scanner;

public class hw3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int level = input.nextInt();
        long n = 1;
        input.close();
        for (int k = 0; k <= level; k++) {
            if(k != 0) System.out.print(" ");
            System.out.print(n);
            n = n * (level - k) / (k + 1);
        }
        System.out.println();
    }
}