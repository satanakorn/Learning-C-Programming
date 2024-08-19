#include <stdio.h>

void myFunction(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() { 
    myFunction("owen");
    myFunction("madii");
    myFunction("test");


    return 0;
}