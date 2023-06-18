package inheritence;


public class Person {
    public String name;
    public String address;

    public Person(String n, String a) {
        name = n;
        address = a;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getAddress() {
        return address;
    }

}
