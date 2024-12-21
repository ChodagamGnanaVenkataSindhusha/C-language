#include <stdio.h>
void main()
{
int marks1, marks2, marks3, marks4,marks5, total, grade;
float average;
printf("Enter marks for 5 subjects: ");
scanf("%d%d%d%d%d", &marks1,&marks2, &marks3, &marks4, &marks5);
total = marks1 + marks2 + marks3 + marks4 + marks5;
average = total / 5.0;
printf("Average Marks is %.2f\n",average);
if (average >= 90)
{
grade = 1;
}
else if (average >= 80)
{
grade = 2;
}
else if (average >= 70)
{
grade = 3;
}
else if (average >= 60)
{
grade = 4;
}
else if (average >= 50)
{
grade = 5;
}
else
{
grade = 6;
}
switch (grade)
{
case 1:
printf("Grade: A+\n");
break;
case 2:
printf("Grade: A\n");
break;
case 3:
printf("Grade: B\n");
break;
case 4:
printf("Grade: C\n");
break;
case 5:
printf("Grade: D\n");
break;
default:
printf("Fail\n");
}
}
