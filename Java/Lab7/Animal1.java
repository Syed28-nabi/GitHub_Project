package Lab7;
public class Animal1 {
    void eat() {
        System.out.println("eating...");
    }
}

class Dog extends Animal1 {
    void bark() {
        System.out.println("barking...");
    }
}

class BabyDog extends Dog {
    void weep() {
        System.out.println("weeping...");
    }

    class TestInheritance {
        public static void main(String args[]) {
            Dog d = new Dog();
            d.bark();
            d.eat();
        }
    }
}