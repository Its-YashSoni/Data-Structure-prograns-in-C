//Write a program to create a matrix and print it with rotation of 180 degree in clock wise Direction.

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j;
 clrscr();
 printf("enter 9 numbers: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
 }
 printf("180 degree rotated matrix is: \n");
 for(i=2;i>=0;i--)
 {
 for(j=2;j>=0;j--)
 {
 printf("%d ",a[i][j]);
 }
 printf("\n");
 }
 getch();
}