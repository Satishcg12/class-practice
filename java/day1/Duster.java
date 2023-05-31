package day1;

public class Duster {
    private int length;
    private int bredth;
    private String color;
    private String CompanyName;
    public Duster( int length, int bredth, String color,Company company){

        this.length = length;
        this.bredth = bredth;
        this.color = color;
        this.CompanyName = company.getCompanyName();
        printDetail();
    }
    public int getLength(){
        return this.length;
    }
    public int getBredth(){
        return this.bredth;
    }   
    public String getColor(){
        return this.color;
    }
    private void printDetail(){
        System.out.println("Your duster has:");
        System.out.println("Length : " + this.length);
        System.out.println("Bredth : " + this.bredth);
        System.out.println("Color : " + this.color);
        System.out.println("Company : " + this.CompanyName);
    }

}
