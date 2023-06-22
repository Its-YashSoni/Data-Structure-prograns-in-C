//Write a program to create a matrix and print upper triangular matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,row,col;
int a[10][10];
clrscr();
printf("enter row and column respectively");
scanf("%d %d" ,&row,&col);

printf("enter %d numbers",row*col);

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(i<=j){
printf("%d ",a[i][j]);
}
else
printf("0 ");
}
printf("\n" );

}
getch();
}
