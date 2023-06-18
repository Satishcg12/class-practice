package exceptions;

public class try_catch {

    static void exception() throws ArithmeticException {
                    int a = 10 / 0;

        System.out.println("custome exception.");
    }
    public static void main(String[] args) {
        try {
            //no exception or error            
            // int a = 10 / 1;
            exception();            
            //exception or error 
            int a = 10 / 0;

            throw new Exception("it work properly");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("run alwyas");

        }
    }
}