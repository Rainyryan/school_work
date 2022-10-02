package ProgramDesignII.Ch3;

import java.io.FileInputStream;
import java.util.Scanner;
import java.io.File;
import java.io.IOException;


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
        try {
            File myObj = new File("myTestFile.txt");
            if (myObj.createNewFile()) {
              System.out.println("File created: " + myObj.getName());
            } else {
              System.out.println("File already exists.");
            }
          } catch (IOException e) {
            System.out.println("An error occurred.");
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