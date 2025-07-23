#include <stdio.h>

int main() {
    // เก็บข้อมูล 
    char name[3][30];      // ชื่อแต่ละคน ยาวได้ 29 ตัวอักษร
    int age[3];            // อายุ
    float height[3];       // ส่วนสูง
    float weight[3];       // น้ำหนัก
    char grade[3];         // เกรด (A, B, C, ...)

    // รับข้อมูลผู้ใช้ 
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d (Name Age Height(cm) Weight(kg) Grade): ", i + 1);
        scanf("%s %d %f %f %c", name[i], &age[i], &height[i], &weight[i], &grade[i]);
        while (getchar() != '\n');   // ใช้ล้าง newline ที่เหลือจาก buffer
    }

    // ให้แสดงแบบผลตาราง
    printf("\n| %-7s | %-3s | %-10s | %-10s | %-11s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    printf("|---------|-----|------------|------------|-------------|\n");

    // แสดงข้อมูลแต่ละคน
    for (int i = 0; i < 3; i++) {
        printf("| %-7s | %-3d | %-10.1f | %-10.1f | %-11c |\n", 
               name[i], age[i], height[i], weight[i], grade[i]);
    }

    return 0;
}