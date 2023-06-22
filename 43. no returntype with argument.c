//Write a program to add two numbers using function with argument with noreturn type.

#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two numbers: ");
scanf("%d %d",&a,&b);
add(a,b);
getch();
}

void add(int a,int b)
{
int c;
c=a+b;
printf("sum is %d",c);
}
