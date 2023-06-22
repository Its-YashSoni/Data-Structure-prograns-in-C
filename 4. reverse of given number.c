//Write a program to print reverse of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,rev;
clrscr();
printf("enter the number to reverse");
scanf("%d",&num);
for( ;num>0;num=num/10)
{
rev=num%10;
printf("%d",rev);
}

getch();
}