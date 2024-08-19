#include <stdio.h>

struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() { 
    struct Car car1 = {"BMW" , "X5", 1999};
    printf("%s\n" , car1.brand);
    printf("%s\n" , car1.model);
    printf("%d" , car1.year);
    return 0;

}