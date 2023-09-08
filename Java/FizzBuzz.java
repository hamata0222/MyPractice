public class FizzBuzz {
static final int MAX_VALUE = 100;

public static void main(String args[]) {
    for (int i = 0; i < MAX_VALUE; i++) {
        if ((i % 15) == 0) {
            System.out.println("FizzBuzz");
        } else if ((i % 5) == 0) {
            System.out.println("Buzz");
        } else if ((i % 3) == 0) {
            System.out.println("Fizz");
        } else {
            System.out.println(i);
        }
    }
}
}

