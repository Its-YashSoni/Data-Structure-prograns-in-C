//Write a program to create a matrix and print it row and col ask by the user.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,row,col;
clrscr();
printf("enter row and col respectively: ");
scanf("%d %d",&row,&col);
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
printf("%d  ",a[i][j]);

}
printf("\n" );

}
getch();
}
