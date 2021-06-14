// author : Bryce Meizen
// today : 6 / 14 / 2021

#include <iostream>

void printHelloWorld()
{
    std::cout << "Hello World!\n"
              << std::endl;
}

void printLoop()
{
    for (int i = 0; i < 11; i += 2)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    printHelloWorld();
    printLoop();
}