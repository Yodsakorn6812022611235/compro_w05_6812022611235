#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับข้อมูลส่วนตัว
    char name[30];        // ชื่อ
    int age;              // อายุ
    float height;         // ส่วนสูง

    // ประกาศตัวแปรสำหรับข้อมูลผลการเรียน
    char subject[30];     // ชื่อวิชา
    float grade;          // เกรด
    char symbol;          // ตัวอักษรแทนเกรด

    // รับข้อมูลจากผู้ใช้ (บรรทัดที่ 1)
    printf("Enter your name, age, and height: ");
    scanf("%s %d %f", name, &age, &height);

    // รับข้อมูลจากผู้ใช้ (บรรทัดที่ 2)
    printf("Enter subject, grade, and grade symbol: ");
    scanf("%s %f %c", subject, &grade, &symbol);

    // แสดงผลข้อมูลตามรูปแบบที่กำหนด
    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject[0], name[0], grade, symbol);

    return 0;
}
