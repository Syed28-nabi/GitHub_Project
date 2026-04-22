import java.util.Scanner;

public class Students {

    int rollNo;
    int marksPercentage;
    static int studentCount = 0;
    static int firstClassStudentCount = 0;
    static int secondClassStudentCount = 0;
    static int passClassStudentCount = 0;
    static int failedStudentCount = 0;

    public Students(int r, int m) {
        this.rollNo = r;
        this.marksPercentage = m;

        studentCount++;

        if (m >= 60) {
            firstClassStudentCount++;
        } else if (m >= 50) {
            secondClassStudentCount++;
        } else if (m >= 40) {
            passClassStudentCount++;
        } else {
            failedStudentCount++;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Students[] students = new Students[20];

        for (int i = 0; i < 20; i++) {
            System.out.println("Enter data for the Student " + (i + 1));
            System.out.print("Enter Roll Number: ");
            int roll = scanner.nextInt();

            System.out.print("Enter Marks Percentage: ");
            int marks = scanner.nextInt();

            students[i] = new Students(roll, marks);
        }

        scanner.close();
        System.out.println("\n");
        System.out.println("Final Results");
        System.out.println("Total No. of Students: " + studentCount);
        System.out.println("Students with First Class: " + firstClassStudentCount);
        System.out.println("Students with Second Class: " + secondClassStudentCount);
        System.out.println("Students with Pass Class: " + passClassStudentCount);
        System.out.println("Failed Students: " + failedStudentCount);
    }
}
