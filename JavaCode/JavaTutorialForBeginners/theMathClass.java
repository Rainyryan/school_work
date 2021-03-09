package JavaTutorialForBeginners;

public class theMathClass {
    public static void main(String[] args) {
        try{
        System.out.println(Math.round(1.4F)); // rounds float number to int
        System.out.println(Math.round(123.1234D)); //rounds double number to long
        System.out.println(Math.ceil(1.1F)); //returns smallest Z in double form thats >= input
        System.out.println(Math.floor(1.9F)); // returns latgest Z in double form thats <= input
        }catch (Exception e){
            System.out.println("Something went wrong");
        }
    }
}
