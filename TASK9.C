#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num;
float fact=1;
printf("\nEnter any number to find the factorial:");
scanf("%d",&num);
while(num>0)
{
fact=fact*num;
num=num-1;
}
printf("\nFactorial of the entered number is %.3f",fact);
getch();
}