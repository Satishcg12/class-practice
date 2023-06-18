package inheritence;

public class main {
    public static void main(String[]args){
        Employee emp = new Employee("Rayyan", "balami", "null");
        emp.print();
        IFirst mul = new MultipalInherentance();
        mul.Method1();
        System.out.println(mul.Method1());
    }

}
