// import java.io.*;
public class Example {
    private int var;

    public Example() {
        var = 10;
    }

    public Example(int num) {
        var = num;
    }

    public int getValue() {
        return var;
    }

    public static void main(String args[]) {
        Example ex1 = new Example();
        Example ex2 = new Example(20);
        System.out.println("var in ex1 is: " + ex1.getValue());
        System.out.println("var in ex2 is: " + ex2.getValue());
        
        // If we write like this, then there will no need to use getValue() method
        // System.out.println("var in ex1 is: " + ex1.var);
        // System.out.println("var in ex2 is: " + ex2.var);
    }
}
