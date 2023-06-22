//write a program to add two numbers using function returntype with argument

#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,c;
clrscr();
printf("enter 2 numbers: ");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("sum is %d",c);
getch();
}

int add(int x,int y)
{
int z;
z=x+y;
return(z);
}
