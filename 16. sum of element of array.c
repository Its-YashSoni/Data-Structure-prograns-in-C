//Write a program to print sum of all array elements.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,sum=0;
clrscr();
printf("how many number you want to insert in array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The matrix is: \n");
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("SUM IS = %d",sum);
getch();
}
