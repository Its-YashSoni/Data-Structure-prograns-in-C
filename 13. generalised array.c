//Write a program to create an generalise array and print

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n;
printf("how many number you want to insert in array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array is: \n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
