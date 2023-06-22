//Write a program to delete a number from array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50], i,pos,n;
clrscr();
printf("how many number you want to insert: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("which number you want to delete:  ");
scanf("%d",&pos);
if(pos>=n+1)
printf("invalid pos");
else{


for(i=pos-1;i<=n-1;i++)
{
a[i]=a[i+1];

}

}
printf("resultant array is: ");
for(i=0;i<n-1;i++)
{
printf("\n%d\n",a[i]);
}
getch();
}