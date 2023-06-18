package inheritence;

public class Employee extends Person {
    private String departmant;
    public Employee(String n, String a, String d) {
        super(n, a);
        this.departmant = d;
    }
    public void print(){
        System.out.println("\nName : " + this.name + "\nAddress : " +  this.address + "\nDepartment : " +  this.departmant);
    }    
}
