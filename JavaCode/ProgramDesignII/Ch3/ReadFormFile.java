package ProgramDesignII.Ch3;

import java.io.FileInputStream;
import java.util.Scanner;

public class ReadFormFile{
    public static void main(String[] args) {
        try{
            Scanner scanner = new Scanner(new FileInputStream("/Users/ryanchen/JavaCode/text.txt"));
            String name = scanner.nextLine();
            String id = scanner.nextLine();
            String school = scanner.nextLine();

            System.out.println("Name:"+name);
            System.out.println("ID:"+id);
            System.out.println("School:"+school);
        }catch(Exception e){
            e.printStackTrace();
        }
    }           
}

/*
try{
        
            Scanner scanner = new Scanner(new FileInputStream("~/JavaCode/test.txt"));
            String name = scanner.nextLine();
            String id = scanner.nextLine();
            String school = scanner.nextLine();
            
            System.out.println("Name:"+name);
            System.out.println("ID:"+id);
            System.out.println("School:"+school);
        }catch(Exception e){ e.printStackTrace();
*/