#include <stdio.h>


int main() { 
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n" , myNumbers[1]); //show value of index 1 is 50

    myNumbers[1] = 20; //change value of the first element to 20

    printf("%d\n\n" , myNumbers[1]);

    for (int i = 0; i < 4; i++) { 
        printf("%d\n" , myNumbers[i]);
    }

    return 0;
}