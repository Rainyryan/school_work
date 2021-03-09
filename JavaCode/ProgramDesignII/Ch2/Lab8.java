package ProgramDesignII.Ch2;

public class Lab8 {
    public static void main(String[] args) {
        int value1 = 3;
        int value2 = 4;
        int result = 0;
        result = value1++ * value2--;
        System.out.println("Post increment/decrement: " + result); result = ++value1 * --value2;
        System.out.println("Pre increment/decrement: " + result);
    }
}
