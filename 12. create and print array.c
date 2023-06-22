//Write a program to create an array and print

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
clrscr();
printf("enter 10 number to insert in array: ");
scanf("%d",&n);
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("The matrix is: \n");
for(i=0;i<10;i++)
{
printf("%d ",a[i]);
}
getch();
}
