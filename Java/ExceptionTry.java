public class ExceptionTry {

    public static void main(String[] args) {
        try {
            int a = 10;
            int b = 0;
            int c = a / b; // This will cause ArithmeticException
            System.out.println("Result: " + c);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        } finally {
            System.out.println("Execution of the try-catch block is complete.");
        }
    }
}