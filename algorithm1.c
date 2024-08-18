#include <stdio.h>

int findmax(int arr[] , int n){ 
    int max = arr[0];
    for(int i = 0; i < n; i++) { 
        if(arr[i] > max){ 
            max = arr[i];
        }
    }
    return max;
}

int main() { 
    int numbers[] = {1,2,3,5,6,4,8,7,9,10,11,55,88,66};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int max = findmax(numbers , size);
    printf("The maximum value is %d\n" , max);
    return 0;
}