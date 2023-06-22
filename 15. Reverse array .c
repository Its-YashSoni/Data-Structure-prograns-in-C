//Write a program to create an array print it reverse order.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n;
clrscr();
printf("how many number you want to insert in array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The matrix is: \n");
for(i=n;i>=0;i--)
{
printf("%d ",a[i]);
}
getch();
}
