//Write a program to print to power of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,pow,sum=1;
// clrscr();
printf("enter the number and power respectively:");
scanf("%d %d",&num,&pow);
for(i=pow;i>=1;i--)
{
sum=sum*num;
}
printf("%d",sum);

getch();

}