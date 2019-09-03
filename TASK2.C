#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float f,c;
printf("Enter the temperature in celcius");
scanf("%f",&c);
f=c*9/5+32;
printf("\nAFTER CONVERSION");
printf("\nTemperature entered in celcius is %f",c);
printf("\nConverted to fehrenhiet is %f",f);
getch();
}

