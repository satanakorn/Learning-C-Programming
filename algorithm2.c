#include <stdio.h>

void bubbleSort(int arr[] , int n) { 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i -1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1] = temp; 
            } 
        }
    }
}

int main() { 
    int numbers[] = {1,5,6,8,7,4,6,3,1,5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    bubbleSort(numbers, size);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) { 
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}