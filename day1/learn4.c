#include <stdio.h>

// create Function to add two numbers
int add(int x , int y) { 
    return x + y;
}


int main() { 

    int sum = add(5 , 5);

    printf("Sum = %d" , sum);

    return 0;
}