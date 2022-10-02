package ProgramDesignII.Homeworks;

import java.util.Scanner;
import java.lang.Math;

public class hw2 {
    public static void main(String[] args) {
        final Integer num1, num2;
        String operator, numOne = "null", numTwo = "null";
        String[] numToWords = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        
        Scanner userInput = new Scanner(System.in);
        num1 = userInput.nextInt();
        num2 = userInput.nextInt();
        operator = userInput.next();
        userInput.close();

        for (int i = 0; i < numToWords.length; i++){
            if(num1 == i)
                numOne = numToWords[i];
            if(num2 == i)
                numTwo = numToWords[i];
        }
        if(numOne.equals("null") || numTwo.equals("null")){
            System.out.println("invalid number");
            System.exit(0);
        }
        //System.out.println(numOne + numTwo + num1 + num2 + operator); //trace variable

        switch(operator){
            case "+":System.out.println(numOne+" plus "+numTwo+" is "+(num1+num2));
                break;
            case "-":System.out.println(numOne+" minus "+numTwo+" is "+(num1-num2));
                break;
            case "*":System.out.println(numOne+" multiplied by "+numTwo+" is "+(num1*num2));
                break;
            case "/":
                if(num2 == 0){
                    System.out.println("division by zero is not allowed");
                }else{
                    System.out.println(numOne+" devided by "+numTwo+" is "+((float)num1/(float)num2));
                }
                break;
            case "^":System.out.println(numOne+" to the power "+numTwo+" is "+((int)Math.pow(num1, num2)));
                break;
        }
    }
}