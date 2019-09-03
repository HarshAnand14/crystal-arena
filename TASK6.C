#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,rem,sum=0,temp;
printf("\nEnter the number:");
scanf("%d",&n);
for(temp=n;n!=0;n=n/10)
{
rem=n%10;
sum=sum+(rem*rem*rem);
}
if(sum==temp)
printf("\n%d is an Armstrong number",temp);
else
printf("\n%d is not an Armstrong number",temp);
getch();
}

