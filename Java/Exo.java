public class Exo {
    class Exc0 {
        public static void main(String args[]) {
            int d = 0;
            int a = 42 / d;
        }
    }
}
//     class Exc1 {
// public static void main(String args[]) {
// try {
// int d = 0;
// int a = 42 / d;
// } catch (ArithmeticException e) {
// System.out.println("Division by zero.");
// }
// }
//     }

//     class Exc2 {
//         public static void main(String args[]) {
//             try {
//                 int d = 0;
//                 int a = 42 / d;
//             } catch (ArithmeticException e) {
//                 System.out.println("Division by zero.");
//             } finally {
//                 System.out.println("This block is always executed.");
//             }
//         }
//     }
// }