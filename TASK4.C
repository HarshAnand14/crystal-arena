#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char fname[10],lname[10];
printf("\nEnter your first name:");
scanf("%s",&fname);
printf("\nEnter your second name:");
scanf("%s",&lname);
printf("\nDISPLAYING THE FULL NAME");
printf("\nYour full name : %s %s",fname,lname);
getch();
}