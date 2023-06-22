//Write a program to check a number is Armstrong number or not.

#include<stdio.h>
int main()
{int a,b,r,sum=0;
printf("enter the number: ");
scanf("%d",&a);
b=a;
while(a>0)
{
r=a%10;
sum=sum+(r*r*r);
a=a/10;
}
if(sum==b)
printf("armstrong number");
else
printf("not armstrong number");

return 0;
}
