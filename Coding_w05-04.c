#include <stdio.h>

int main() {
    // เก็บข้อมูล 3 คน
    char name[3][20];      // ชื่อแต่ละคน ยาวได้สูงสุด 19 ตัวอักษร
    int age[3];            // อายุแต่ละคน
    float height[3];       // ส่วนสูงแต่ละคน
    float weight[3];       // น้ำหนักแต่ละคน
    char grade[3];         // เกรดแต่ละคน (A, B, C, ...)

    // รับข้อมูล 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d (Name Age Height(cm) Weight(kg) Grade): ", i + 1);
        scanf("%s %d %f %f %c", name[i], &age[i], &height[i], &weight[i], &grade[i]);
        while (getchar() != '\n'); // ล้าง newline ที่เหลือจาก buffer
    }

    // ให้แสดงหัวตารางของข้อความ
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