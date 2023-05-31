package day2;

import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        String[] names = new String[3];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 3 Name: ");
        for(int i=0 ; i<3;i++){
            names[i] = sc.nextLine();
        }
        // illegal 
        // for(String name: names){
        //     name = sc.nextLine();
        // }
        sc.close();
        
        System.out.println("Names:");
        for(String name: names){
            System.out.println(name);
        }
    }

}
