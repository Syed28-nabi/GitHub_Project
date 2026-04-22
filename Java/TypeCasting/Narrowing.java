package lab4;

public class Narrowing {

    double d;
    long l;

    public Narrowing() {
        d = 7748.192;
        l = 7748192L;
    }

    public byte doubleToByte() {
        byte b = (byte) d;
        return b;
    }

    public short doubleToShort() {
        short s = (short) d;
        return s;
    }

    public int doubleToInt() {
        int i = (int) d;
        return i;
    }

    public long doubleToLong() {
        long convertedLong = (long) d;
        return convertedLong;
    }

    public float doubleToFloat() {
        float f = (float) d;
        return f;
    }

    public byte longToByte() {
        byte b = (byte) l;
        return b;
    }

    public short longToShort() {
        short s = (short) l;
        return s;
    }

    public int longToInt() {
        int i = (int) l;
        return i;
    }

    public float longToFloat() {
        float f = (float) l;
        return f;
    }

    public static void main(String[] args) {

        Narrowing narrowConverter = new Narrowing();

        System.out.println("Demonstrating Narrowing Type Casting");
        System.out.println("\nInitial Values:");
        System.out.println(narrowConverter.d);
        System.out.println(narrowConverter.l);

        System.out.println("\nResults after Narrowing Conversions:");

        byte bResult = narrowConverter.doubleToByte();
        System.out.println("double to byte:  " + bResult);

        short sResult = narrowConverter.doubleToShort();
        System.out.println("double to short:  " + sResult);

        int iResult = narrowConverter.doubleToInt();
        System.out.println("double to int:  " + iResult);

        long lResult = narrowConverter.doubleToLong();
        System.out.println("double to long:  " + lResult);

        float fResult = narrowConverter.doubleToFloat();
        System.out.println("double to float:  " + fResult);

        byte bResultFromLong = narrowConverter.longToByte();
        System.out.println("long to byte:  " + bResultFromLong);

        short sResultFromLong = narrowConverter.longToShort();
        System.out.println("long to short:  " + sResultFromLong);

        int iResultFromLong = narrowConverter.longToInt();
        System.out.println("long to int:  " + iResultFromLong);

        float fResultFromLong = narrowConverter.longToFloat();
        System.out.println("long to float:  " + fResultFromLong);

    }
}