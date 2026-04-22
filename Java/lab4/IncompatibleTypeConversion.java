// package lab4;

// public class IncompatibleTypeConversion {

//     int i;

//     public IncompatibleTypeConversion(int facultyId) {
//         this.i = facultyId;
//     }

//     public char intToChar() {
//         char c = (char) i;
//         return c;
//     }

//     public boolean intToBool() {
//         boolean b = (boolean) i;
//         return b;
//     }

//     public static void main(String[] args) {

//         int myFacultyId = 192;
//         IncompatibleTypeConversion converter = new IncompatibleTypeConversion(myFacultyId);

//         System.out.println("Original int value (i): " + converter.i);

//         char charResult = converter.intToChar();
//         System.out.println("After casting int to char: " + charResult);

//         boolean boolResult = converter.intToBool();
//         System.out.println("After casting int to boolean: " + boolResult);
//     }
// }