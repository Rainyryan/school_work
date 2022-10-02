package ProgramDesignII.Homeworks;

import java.util.Scanner;

public class hw1{
    public static void main(String[] args) {
        final double gramsKillMice, miceWeight, carlosWeight; 

        Scanner userInput = new Scanner(System.in);

        gramsKillMice = userInput.nextDouble();
        miceWeight = userInput.nextDouble();
        carlosWeight = userInput.nextDouble();
        /*remember to close the userInput Scanner*/
        userInput.close(); 

        System.out.println(Math.round(10*carlosWeight/miceWeight * gramsKillMice/0.03)/10.0);
    }
}