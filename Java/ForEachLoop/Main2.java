package ForEachLoop;

// public class Main2 {
//     class Main {// Using for loop
//         public static void main(String[] args) {
//             char[] vowels = { 'a', 'e', 'i', 'o', 'u' };
//             // iterating through an array using a for loop
//             for (int i = 0; i < vowels.length; ++i) {
//                 System.out.println(vowels[i]);
//             }
//         }
//     }
// }
// Using for-each Loop
public class Main2 {
    public static void main(String[] args) {
        char[] vowels = { 'a', 'e', 'i', 'o', 'u' };
        // iterating through an array using the for-each loop
        for (char item : vowels) {
            System.out.println(item);
        }
    }
}
