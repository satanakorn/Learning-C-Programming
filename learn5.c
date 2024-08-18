#include <stdio.h>

int main() { 
    int number[5] = {1,2,3,4,5};

    for (int i = 0; i < 5;i++) {
        printf("number[%d]  = %d\n" ,i, number[i]);
    }

    return 0;
}