public class Counter {
    private int count;

    public Counter() {
        count = 0;
    }

    public void increment() {
        count++;
    }

    public void decrement() {
        count--;
    }

    public int getCount() {
        return count;
    }

    public static void main(String[] args) {
        Counter counter = new Counter();
        counter.increment();
        counter.increment();
        counter.increment();
        counter.increment();
        counter.increment();
        System.out.println("Count after incrementing five times: " + counter.getCount());
        counter.decrement();
        counter.decrement();
        counter.decrement();
        counter.decrement();
        System.out.println("Count after decrementing four times: " + counter.getCount());
    }
}
