#include <stdio.h>

void increase(int *p) { 
    (*p)++;
}

int main() { 
    int x = 42;
    int* ptr = &x;
    increase(ptr);
    printf("%d" , x);
    return 0;
}