package JavaTutorialForBeginners;

public class casting {
    public static void main(String[] args) {
        // implicit casting/conversion
        // byte -> short -> int -> long -> float -> double
        short x = 1;
        int y = x + 2;

        //explicit casting
        double a = 1.1;
        int b = (int)a + 2;

        String c = "12345";
        
        System.out.println(y + "," + b + "," + Integer.parseInt(c)+ "," + Float.parseFloat(c));
        //"Integer" = wrapper class for int, "parseInt()" is a method that returns the int of a String
    }
}
