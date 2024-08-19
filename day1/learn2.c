#include <stdio.h>

int main() { 
    int number;


    printf("Enter number integer : ");
    scanf("%d" , &number); //get input from user

    if (number > 0) { 
        printf("The number is positive.");
    }
    else if (number < 0) { 
        printf("The number is negative.\n");
    } 
    else { 
        printf("The number is zero.\n");
    }

    return 0;
}