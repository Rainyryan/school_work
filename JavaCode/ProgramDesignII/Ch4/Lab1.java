package ProgramDesignII.Ch4;

import java.util.Random;

public class Lab1 {
    public static void main(String[] args) {
        int i = 0;
        while(i++ <= 100){
            Random rnd = new Random();

            int j = rnd.nextInt(40);
            System.out.println(j);
        }    
    
    }
}
