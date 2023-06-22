//Write a program to print add two number.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum;
clrscr();
printf("enter two numbers : ");
scanf("%d %d",&a,&b);
sum=a+b;
printf("Sum of %d and %d is : %d",a,b,sum);
getch();
}