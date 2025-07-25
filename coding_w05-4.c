#include <stdio.h>

struct Person {
char name;
int age;
float height;
float weight;
char grade;
};

int main() {
    struct Person people[3];
    printf("กรุณาป้อนข้อมูลจำนวน 3 คน:\n");
    printf("รูปแบบข้อมูล: ชื่อเล่น อายุ ส่วนสูง น้ำหนัก รหัสเกรด\n");
    printf("ตัวอย่าง: A 21 175.5 90.2 A\n\n");
    // รับข้อมูล 
for(int i = 0; i < 3; i++) {
    printf("ป้อนข้อมูลคนที่ %d: ", i + 1);
    scanf(" %c %d %f %f %c",
          &people[i].name,
          &people[i].age,
          &people[i].height,
          &people[i].weight,
          &people[i].grade);
}
// แดสงผล
printf("n+-----------------+-----+------------+------------+-------------+\n");
printf("| ชื่อเล่น          | อายุ | ส่วนสูง(cm) | น้ำหนัก(kg) | รหัสเกรด    |\n");
printf("+-----------------+-----+------------+------------+-------------+\n");

for(int i = 0; i < 3; i++) {
    printf("| %c               | %d   | %.1f       | %.1f       | %c           |\n",
           people[i].name,
           people[i].age,
           people[i].height,
           people[i].weight,
           people[i].grade);
}   
printf("+-----------------+-----+------------+------------+-------------+\n");
return 0;
}