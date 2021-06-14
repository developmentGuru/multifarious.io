// author : Bryce Meizen
// today : 6 / 14 / 2021

#include <stdio.h>

void printHelloWorld()
{
    printf("Hello World!\n\n");
}

void printLoop()
{
    for (int i = 0; i < 11; i += 2)
    {
        // displays output

        printf("%d", (i));
        printf("\n");
    }
}

int main()
{
    printHelloWorld();
    printLoop();
}