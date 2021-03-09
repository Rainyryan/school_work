package JavaTutorialForBeginners;

import java.util.Arrays;

public class arrays {
    public static void main(String[] args) {
        int[] numbers = { 3, 4, 2, 5, 1 }; 
        int[] happy = new int[5];
        Arrays.sort(numbers);

        System.out.println(Arrays.toString(numbers) + Arrays.toString(happy)); // use "Array.toString() to get the values of an array
    }
}
