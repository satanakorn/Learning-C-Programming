#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char c;

    // เปิดไฟล์เพื่ออ่าน
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1; // ส่งค่ากลับ 1 เพื่อแสดงว่ามีข้อผิดพลาดเกิดขึ้น
    }

    // อ่านไฟล์และพิมพ์ออกทางหน้าจอ
    c = fgetc(fptr);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);  // ปิดไฟล์

    return 0;
}
