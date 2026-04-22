package ForEachLoop;

public class HexaDecimal {

    private String hex;

    public HexaDecimal(String hex) {
        this.hex = hex;
    }

    public String hexToDecimal(String hexVal) {
        int decimal = 0;
        for (char ch : hexVal.toUpperCase().toCharArray()) {
            int value;
            if (ch >= '0' && ch <= '9') {
                value = ch - '0';
            } else {
                value = 10 + (ch - 'A');
            }
            decimal = decimal * 16 + value;
        }
        return String.valueOf(decimal);
    }

    public String hexToOctal(String hexVal) {
        int decimal = 0;
        for (char ch : hexVal.toUpperCase().toCharArray()) {
            int value;
            if (ch >= '0' && ch <= '9') {
                value = ch - '0';
            } else {
                value = 10 + (ch - 'A');
            }
            decimal = decimal * 16 + value;
        }

        String octal = "";
        while (decimal > 0) {
            int rem = decimal % 8;
            octal = rem + octal; 
            decimal /= 8;
        }
        return octal;
    }

    public String hexToBinary(String hexVal) {
        String binary = "";
        for (char ch : hexVal.toUpperCase().toCharArray()) {
            int value;
            if (ch >= '0' && ch <= '9') {
                value = ch - '0';
            } else {
                value = 10 + (ch - 'A');
            }

            String binDigit = "";
            for (int i = 0; i < 4; i++) {
                binDigit = (value % 2) + binDigit;
                value /= 2;
            }
            binary += binDigit; 
        }
        return binary;
    }

    public static void main(String[] args) {
        HexaDecimal hex1 = new HexaDecimal("192");
        HexaDecimal hex2 = new HexaDecimal("912");
        HexaDecimal hex3 = new HexaDecimal("219");

        HexaDecimal[] arr = { hex1, hex2, hex3 };

        for (HexaDecimal h : arr) {
            System.out.println("Hex: " + h.hex);
            System.out.println("Decimal: " + h.hexToDecimal(h.hex));
            System.out.println("Octal: " + h.hexToOctal(h.hex));
            System.out.println("Binary: " + h.hexToBinary(h.hex));
            System.out.println();
        }
    }
}