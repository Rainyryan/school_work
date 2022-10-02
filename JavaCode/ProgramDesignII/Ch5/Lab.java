package ProgramDesignII.Ch5;

import java.util.StringTokenizer;

public class Lab {
    public static void main(String[] args) {
        String str = "My name is Carlos and I love cars";
        StringTokenizer strtok = new StringTokenizer(str," ");

        while(strtok.hasMoreTokens())
            System.out.println(strtok.nextToken());
    }
}