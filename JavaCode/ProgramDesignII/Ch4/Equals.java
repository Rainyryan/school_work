package ProgramDesignII.Ch4;

public class Equals {
    public static void main(String[] args) {
        String a = new String ("Java");
        String b = new String ("Java");

        System.out.println(a);
        System.out.println(b);

        if(a==b)
            System.out.println("True");
        if(a.equals(b))
            System.out.println("True");
        }
    }
