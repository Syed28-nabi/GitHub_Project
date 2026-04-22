package lab4;
class WideningExample {
    public static void main(String[] args) {
        int i = 10;
        long l = i;
        double d = i;
        System.out.println("Integer: " + i +" Long: "+ l +" Double: "+ d );
        // System.out.println("Long: " + l);
        // System.out.println("Double: " + d);
    }
}
