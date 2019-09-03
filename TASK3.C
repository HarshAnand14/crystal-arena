#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int m1,m2,m3;
float sum,avg;
printf("\nEnter the marks of m1:");
scanf("%d",&m1);
printf("\nEnter the marks of m2:");
scanf("%d",&m2);
printf("\nEnter the marks of m3:");
scanf("%d",&m3);
sum=m1+m2+m3;
avg=(m1+m2+m3)/3;
printf("\nThe sum of the marks entered is %f",sum);
printf("\nThe average of the marks entered is %f",avg);
getch();
}