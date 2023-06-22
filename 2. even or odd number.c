//Write a program to print whether the given number is even or odd.

#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the number you want to check: ");
scanf("%d",&num);
if(num%2==0)
printf("The given number %d is even",num);
else
printf("the given number %d is odd",num);

getch();
}