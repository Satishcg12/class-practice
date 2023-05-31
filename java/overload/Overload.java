package overload;

import java.util.*;

public class Overload {
    public int Add(int a, int b){
        return a+b;
    }
    public int Add(int a, int b, int c){
        return a+b+c;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your 1 number: ");
        int a = sc.nextInt();
        System.out.println("Enter your 2 number: ");
        int b = sc.nextInt();
        System.out.println("Enter your 3 number: ");
        int c = sc.nextInt();

        Overload m = new Overload();
        
        int ans = m.Add(a, b, c);
        System.out.println("The sum is: " + ans);

        sc.close();
        
    }
}

