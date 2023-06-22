//Write a program to print sum of digits of a number.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0,r;
clrscr();
printf("enter the number to sum of digit");
scanf("%d",&num);
for( ;num>0;num=num/10)
{
r=num%10;
sum=sum+r;
}
printf("%d",sum);

getch();
}