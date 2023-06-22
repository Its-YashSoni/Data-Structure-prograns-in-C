//Write a program to count even and odd numbers in array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,even=0,odd=0;
printf("how many number you want to insert in array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The matrix is: \n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
even++;
else
odd++;
}

printf("%d even elements are present in array.\n",even);
printf("%d odd elements present in array.",odd);
getch();
}
