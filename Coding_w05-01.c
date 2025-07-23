#include <stdio.h>

int main() {
    char name = 'G';       // ตัวแปรชื่อตัวแรกของชื่อเล่น (ตัวอักษร)
    int age = 20;          // ตัวแปรอายุ (จำนวนเต็ม)
    float weight = 75.5;   // ตัวแปรน้ำหนัก (ทศนิยม)

    // แสดงผล 2 บรรทัด
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}