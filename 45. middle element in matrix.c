#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,row,col;
clrscr();
printf("enter row and col");
scanf("%d %d",&row,&col);
if(row%2!=0&&col%2!=0){
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
if((row-1)/2==i&&(col-1)/2==j)
printf(" %d ",a[i][j]);
else
printf(" 0 ");
}
printf("\n");
}
}
else{
printf("row and column must be odd");
printf("enter row and column again");
}
getch();
}