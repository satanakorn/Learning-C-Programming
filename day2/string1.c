#include <stdio.h>

int main() { 
    char greetings[] = "Hello";
    char text[] = {'H','E','L','L','o','\0'}; //another way of creating strings

    printf("%s\n" , greetings);
    printf("%s" , text);

    return 0;
}