//Write a program to print first Fibonacci number.

#include<stdio.h>
int main()
{
int n,i,a=0,b=1,c;
printf("enter how many numbers you want in series: ");
scanf("%d",&n);

if(n==1)
printf("0");
else if(n==2)
printf("0 1");
else {
printf("0 1 ");
for(i=2;i<n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
return 0;
}
