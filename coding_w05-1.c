#include <stdio.h>

int main() {
    char name = 'F'; //ประกาศตัวแปร name = ตัวหนังสือภาษาอังกฤษตัวแรกของชื่อเล่นตัวเอง (ตัวพิมพ์ใหญ่)
    int age = 18; //ประกาศตัวแปร age = อายุของตัวเอง (เลขจำนวนเต็ม)
    float weight = 77.5; //ประกาศตัวแปร weight = น้ำหนักของตัวเอง (เลขทศนิยม)
    
    printf("Student %c is %d years old.\n", name, age); //แสดงผลบรรทัดแรก โดยจะแสดงชื่อและอายุ
    printf("His weight is %.1f kg.\n", weight); //แสดงผลบรรทัดที่สอง โดยจะแสดงน้ำหนัก
    return 0;
}