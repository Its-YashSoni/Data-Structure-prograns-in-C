//Write a program to insert the element in array

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50], i,pos,val,n;
clrscr();
printf("how many number you want to insert: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter which number you want to insert: ");
scanf("%d",&val);
printf("at which index/position you want to insert: ");
scanf("%d",&pos);
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=val;

printf("resultant array is: ");
for(i=0;i<n+1;i++)
{
printf("\n%d\n",a[i]);
}
getch();
}