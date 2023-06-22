//write a program to create a matrix of 3*3 and print it

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
printf("enter nine numbers");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",a[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d  ",a[i][j]);

}
printf("\n" );

}
getch();
}
