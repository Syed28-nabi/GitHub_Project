public class Cat {
    private String catName;
    private int catAge;

    public Cat() {
        catName = "Unknown";
        catAge = 0;
    }

    public Cat(String catName, int catAge) {
        this.catName = catName;
        this.catAge = catAge;
    }

    public static void main(String[] args) {
        Cat Cat1 = new Cat();
        System.out.println("Cat1 name: " + Cat1.catName);
        System.out.println("Cat1 age: " + Cat1.catAge);
        Cat Cat2 = new Cat("Zara", 3);
        System.out.println("Cat2 name: " + Cat2.catName);
        System.out.println("Cat2 age: " + Cat2.catAge);
    }
}
