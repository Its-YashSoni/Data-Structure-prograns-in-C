//Write a program to check a number is prime or not.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num,flag=0;
clrscr();
printf("enter the number to check prime or not");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
flag=1;
}

if(flag==1)
printf("the given number is not prime");
else
printf("the given number is prime");
getch();

}