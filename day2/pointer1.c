#include <stdio.h>

int main() { 

    int x = 42; //variable x datatype integer assign value is 42
    int* p = &x; // A pointer p that points to x
    int** q = &p; // q is a pointer to a ppointer p

    int myAge = 25;
    int* ptr =  &myAge;

    printf("%d\n" , *ptr);

    printf("%d" , *p);

    return 0;
}