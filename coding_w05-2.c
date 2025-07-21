#include <stdio.h>
int main() {
char name [30];
int age;
float hight;
char subject;
float grade;
char gradechar;

printf("Enter your name , age ,hight ,subject , grade , gradechar : ");
scanf("%c %d %f %c %f %c" & name,age,hight,subject,grade,gradechar);

printf("%c is %d years old %.1f centimeters tall.\n" ,name,age,hight);
printf("In subject %c , grade %.2f which is symbolized as '%c'.\n" ,subject,grade,gradechar);
return 0;
}