#include <stdio.h>

int main(){ 
    //for loop fundamental 
    for (int i = 0; i < 5; i++) { 
        printf("For loop iteration %d\n" , i);
    }

    //while loop 
    printf("\n");

    int j = 0;
    while (j < 5) { 
        printf("While loop iteration %d\n" , j);
        j++;
    }

    return 0;
}