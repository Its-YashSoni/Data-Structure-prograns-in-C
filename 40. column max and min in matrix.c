//Write a program to create a matrix find out col wise maximum and minimum.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,row,col,max=0,min=0;
clrscr();
printf("enter row and col");
scanf("%d %d",&row,&col);

printf("enter %d numbers: ",row*col);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("the matrix is : \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(max<a[j][i])
max=a[j][i];
else
min=a[j][i];
}
printf("max in %d row is %d\n",i+1,max);
printf("min in %d row is %d\n",i+1,min);
}

getch();
}