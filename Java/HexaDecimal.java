public class HexaDecimal {

    private String hex;

    // Lookup table: Hex digit (0–F) → Binary 4-bit string
    private static final String[] bin = {
            "0000", "0001", "0010", "0011",
            "0100", "0101", "0110", "0111",
            "1000", "1001", "1010", "1011",
            "1100", "1101", "1110", "1111"
    };

    public HexaDecimal(String hex) {
        this.hex = hex.toUpperCase(); // store in uppercase
    }

    public String hexToDecimal(String hexVal) {
        int decimal = 0;
        for (char ch : hexVal.toCharArray()) {
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

    public String hexToBinary(String hexVal) {
        String binary = "";
        for (char ch : hexVal.toCharArray()) {
            int index;
            if (ch >= '0' && ch <= '9') {
                index = ch - '0';
            } else {
                index = 10 + (ch - 'A');
            }
            binary += bin[index]; // concatenate from table
        }
        return binary;
    }

    // Hex → Octal (via Binary grouping into 3 bits)
    public String hexToOctal(String hexVal) {
        String binary = hexToBinary(hexVal);

        int pad = (3 - (binary.length() % 3)) % 3;
        while (pad-- > 0) {
            binary = "0" + binary;
        }

        String octal = "";
        for (int i = 0; i < binary.length(); i += 3) {
            String threeBits = binary.substring(i, i + 3);
            int value = Integer.parseInt(threeBits, 2);
            if (!(octal.isEmpty() && value == 0)) {
                octal += value;
            }
        }
        if (octal.isEmpty())
            octal = "0"; // if whole number is 0

        return octal;
    }

    public static void main(String[] args) {
        HexaDecimal hex1 = new HexaDecimal("192");
        HexaDecimal hex2 = new HexaDecimal("A2");
        HexaDecimal hex3 = new HexaDecimal("FF");

        HexaDecimal[] arr = { hex1, hex2, hex3 };

        for (HexaDecimal h : arr) {
            System.out.println("Hex: " + h.hex);
            System.out.println("Decimal: " + h.hexToDecimal(h.hex));
            System.out.println("Binary: " + h.hexToBinary(h.hex));
            System.out.println("Octal: " + h.hexToOctal(h.hex));
            System.out.println();
        }
    }
}