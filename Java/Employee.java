public class Employee {
    String name;
    String designation;

    public void employeeName(String empName) {
        name = empName;
    }

    public void employeeDesignation(String empDesig) {
        designation = empDesig;
    }

    public void printEmployee() {
        System.out.println("Name: " + name);
        System.out.println("Designation: " + designation);
    }

    public static void main(String args[]) {
        Employee empOne = new Employee();
        Employee empTwo = new Employee();
        empOne.employeeName("James Smith");
        empOne.employeeDesignation("Software Engineer");
        empOne.printEmployee();
        empTwo.employeeName("Soaib Akhtar");
        empTwo.employeeDesignation("Provost");
        empTwo.printEmployee();
    }
}