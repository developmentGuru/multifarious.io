// author: Bryce Meizen
// today: 6/14/2021 

public class Main {

    static void printHelloWorld() {
        System.out.println("Hello World!\n");
    }

    static void printLoop() {
        for (int i = 0; i < 11; i += 2) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        printHelloWorld();
        printLoop();
    }
}