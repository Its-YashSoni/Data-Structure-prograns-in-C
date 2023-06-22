//Write a program to add two numbers using function without argument using noreturn type.

#include<stdio.h>
#include<conio.h>
void add();
void main()
{
clrscr();
add();
getch();
}

void add()
{
int a,b,c;
printf("enter 2 numbers: ");
scanf("%d %d",&a,&b);
c=a+b;
printf("sum is %d",c);
}
