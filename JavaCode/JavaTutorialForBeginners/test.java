package JavaTutorialForBeginners;

public class test {
    public static void main(String[] args) {
        float arr[][] = new float[5][10];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                arr[i][j] = (float)Math.round(10000*Math.random())/100;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.printf("%5.2f, ", arr[i][j]);
                if (j == arr[0].length - 1) System.out.println();;
            }
        }
    }
}
