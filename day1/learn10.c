#include <stdio.h>

// ฟังก์ชันที่ใช้พอยน์เตอร์ในการเปลี่ยนค่าตัวแปร
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
