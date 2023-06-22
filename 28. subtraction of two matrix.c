//Write a program for subtraction of two matrix

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,b[3][3],c[3][3];

clrscr();
printf("enter nine numbers for 1st matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the 1st matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");

}
printf("enter the elements for 2nd matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);

}
printf("\n");
}
printf("the sum of matrix is below\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d ",c[i][j]);
}
printf("\n");
}
printf("printed");

getch();

}
