//Write a program to print table of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,mul;
clrscr();
printf("enter the number to print table ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
mul=num*i;
printf("%d\n",mul);
}

getch();
}