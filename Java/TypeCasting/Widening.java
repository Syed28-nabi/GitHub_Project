package TypeCasting;
public class Widening {

    byte b;

    public Widening(int facultyId) {
        this.b = (byte)(facultyId % 127);
    }

    public short byteToShort() {
        short s = b;
        return s;
    }

    public int byteToInt() {
        int i = b;
        return i;
    }

    public long byteToLong() {
        long l = b;
        return l;
    }

    public float byteToFloat() {
        float f = b;
        return f;
    }

    public double byteToDouble() {
        double d = b;
        return d;
    }

    public static void main(String[] args) {
        int myFacultyId = 192;
        Widening widener = new Widening(myFacultyId);

        System.out.println("Demonstrating Widening Type Casting");

        System.out.println("Original byte value (b): " + widener.b);

        System.out.println("Results after Widening");

        short sResult = widener.byteToShort();
        System.out.println("After casting byte to short: " + sResult);

        int iResult = widener.byteToInt();
        System.out.println("After casting byte to int:   " + iResult);

        long lResult = widener.byteToLong();
        System.out.println("After casting byte to long:  " + lResult);

        float fResult = widener.byteToFloat();
        System.out.println("After casting byte to float: " + fResult);

        double dResult = widener.byteToDouble();
        System.out.println("After casting byte to double: " + dResult);
    }
}
