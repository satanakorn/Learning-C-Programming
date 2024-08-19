#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person person1;

    // กำหนดค่าข้อมูลให้กับโครงสร้าง
    printf("Enter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter salary: ");
    scanf("%f", &person1.salary);

    // แสดงข้อมูล
    printf("\nName: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    return 0;
}
