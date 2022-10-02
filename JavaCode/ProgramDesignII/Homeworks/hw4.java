package ProgramDesignII.Homeworks;

import java.lang.Math;
import java.util.Scanner;

public class hw4 {
    public static int largestPrime(int input){
        for (int test = input-1; test > 0; test--) {
            for (int i = 2; i < Math.sqrt(test)+1; i++) {
                if(test%i == 0) break;
                if(i + 1 >= Math.sqrt(test)) return test;
            }
        }
        return 2;
    }
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int input = kb.nextInt();
        kb.close();
        
        System.out.println(largestPrime(input));
    }
}