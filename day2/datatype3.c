#include <stdio.h>

int main() { 
    const int hoursPerDay = 24;
    int  work = 8;
    printf("can not change the values %d\n" , hoursPerDay);
    printf("After declare normal variable %d\n" , work);
    work = 12; // New values ​​can be assigned to variable.
    printf("After declare normal not coststance variable %d" , work);

    return  0 ;
}