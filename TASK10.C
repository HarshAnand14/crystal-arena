#include<stdio.h>
#include<conio.h>
void main()
{
int choice,f,c;
clrscr();
printf("\n1Fehrenheit to celcius:");
printf("\n2Celcius to fehrenheit:");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter temperature in fehrenheit:");
scanf("%d",&f);
c=(f-32)*5/9;
printf("\nThe temperature in celcius is %d",c);
break;
case 2:
printf("\nEnter the temperature in celcius:");
scanf("%d",&c);
f=(c*9/5)+32;
printf("\nThe temperature in fehrenheit is %d",f);
break;
default:
printf("\nInvalid entry");
}
getch();
}

