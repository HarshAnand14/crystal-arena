#include<stdio.h>
#include<conio.h>
void main()
{
char name[50];
int age,number[50];
clrscr();
printf("Enter your name:");
scanf("%s",&name);
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your phone number:");
scanf("%s",&number);
printf("\nDISPLAYING INFORMATION");
printf("\nEntered name is %s",name);
printf("\nEntered age is %d",age);
printf("\nEntered phone number is %s",number);
getch();
}