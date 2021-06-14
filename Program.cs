// author : Bryce Meizen
// today : 6 / 14 / 2021

using System;

public static Program {
    static void printHelloWorld() {
        Console.WriteLine("Hello World!\n");
    }

    static void printLoop() {
        for(int i = 0; i < 11 ; i+=2){
            Console.WriteLine(i);
        }
    }

    public static void Main(string[] args){
        printHelloWorld();
        printLoop();        
    }
}  