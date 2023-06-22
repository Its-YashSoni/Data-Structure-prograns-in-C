//Write a program to find minimum & maximum elements is an array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,max=0,min=0;
clrscr();
printf("how many number you want to insert in array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
else if(a[i]<min)
min=a[i];
}

printf("max element is %d",max);
printf("min element is %d",min);
getch();
}
