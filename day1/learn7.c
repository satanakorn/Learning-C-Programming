#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));  // จัดสรรหน่วยความจำ

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);  // ปล่อยหน่วยความจำ

    return 0;
}
