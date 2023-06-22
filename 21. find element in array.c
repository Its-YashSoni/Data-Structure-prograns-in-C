//Write a program to find element in array.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[50], i,n,find,flag=0;
clrscr();
printf("how many number you want to insert: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("The array is \n");
for(i=0;i<n;i++)
{
printf("[%d] ",a[i]);
}
printf("\nwhich element you want to find");
scanf("%d",&find);

for(i=0;i<n;i++)
{
if(a[i]==find){
flag=1;
break;
}
}
if(flag==1) {
printf("element found at %d index\n",i);
printf("element found at %d location",i+1);
}

else
printf("element not found");

getch();
}