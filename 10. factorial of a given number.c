//Write a program to calculate factorial of a number.

#include<stdio.h>
#include<conio.h>
void main()
{int a,sum=1,i;
clrscr();
printf("enter the number: ");
scanf("%d",&a);

for(i=a;i>1;i--)
{
sum=sum*i;
}
printf("%d",sum);
getch();
}


