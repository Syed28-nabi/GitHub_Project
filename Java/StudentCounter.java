import java.util.Random;
public class StudentCounter {

    int rollNo;
    int marksPercentage;
    static int studentCount = 0;
    static int firstClassStudentCount = 0;
    static int secondClassStudentCount = 0;
    static int passClassStudentCount = 0;
    static int failedStudentCount = 0;

    public StudentCounter(int r, int m) {
        this.rollNo = r;
        this.marksPercentage = m;

        // Increment the total student count for every new student object.
        studentCount++;

        // Increment the specific counter based on the marks percentage.

        if (m >= 60) {
            firstClassStudentCount++;
        } else if (m >= 50 && m < 60) {
            secondClassStudentCount++;
        } else if (m >= 40 && m < 50) {
            passClassStudentCount++;
        } else {
            failedStudentCount++;
        }
    }
    
    public static void main(String[] args) {
        StudentCounter[] students = new StudentCounter[20];

        Random random = new Random();

        for (int i = 0; i < 20; i++) {
            int marks = random.nextInt(101);
            students[i] = new StudentCounter(i + 1, marks);
            System.out.println("Student: " + students[i].rollNo + " -> Marks: "
                    + students[i].marksPercentage + "%");
        }
        System.out.println("\nFinal Result:");
        System.out.println("Total No. of Students: " + studentCount);
        System.out.println("Students with First Class (>=60%): " + firstClassStudentCount);
        System.out.println("Students with Second Class (>=50% and <60%): " + secondClassStudentCount);
        System.out.println("Students with Pass Class (>=40% and <50%): " + passClassStudentCount);
        System.out.println("Failed Students (<40%): " + failedStudentCount);
    }
}