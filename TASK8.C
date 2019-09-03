#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,i;
printf("Enter number:\n");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%dx%d=%d\n",num,i,num*i);
}
getch();
}

