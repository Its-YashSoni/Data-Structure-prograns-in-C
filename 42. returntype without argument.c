//Write a program to add two numbers using function without argument with returntype

#include<stdio.h>
#include<conio.h>
int add();
void main()
{
int c;
clrscr();
c=add();
printf("sum is %d",c);
getch();
}

int add()
{
int a,b,c;
printf("enter two numbers: ");
scanf("%d %d",&a,&b);
c=a+b;
return(c);
}
