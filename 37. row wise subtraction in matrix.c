//Write a program to create a matrix and print it row wise subtraction.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,row,col,sub,total=0;
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
sub=0;
for(j=0;j<col;j++)
{
sub=sub-a[i][j];
}
printf("subraction of %d row is %d\n",i+1,sub);

}


getch();
}