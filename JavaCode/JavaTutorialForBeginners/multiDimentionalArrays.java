package JavaTutorialForBeginners;

import java.util.Arrays;

public class multiDimentionalArrays {
    public static void main(String[] args) {
        int[][] numbers =  { { 1, 2, 3 } , { 4, 5, 6, } };

        System.out.println(Arrays.toString(numbers));
        System.out.println(Arrays.deepToString(numbers));// use "Arrays.deepToString()"" for multi dimentional arrays
    }
}
