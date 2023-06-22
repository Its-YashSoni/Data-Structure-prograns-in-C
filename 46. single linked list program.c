//program to implement single linked list...........


#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node{
int info;
struct node *next;
};
typedef struct node node;

node *create();
void display();
node *insbeg(node*);
node *insend(node*);
node *insmid(node*);
node *delbeg(node*);
node *delend(node*);
node *delmid(node*);
int count(node*);
void sort(node*);

int main()
{
int choice;
node *head;
head=NULL;
while(1){
printf("this is linked list program\n");
printf("**************************\n");
printf("which operation\n");
printf("------------------------\n");
printf("1.create list\n");
printf("2.display list\n");
printf("3.exit from program\n");
printf("4.insert element at begining\n");
printf("5.insert element at end\n");
printf("6.insert element at middle\n");
printf("7.count elements in list\n");
printf("8.delete element from begining.\n");
printf("9.delete last element.\n");
printf("10.delete element from middle\n");
printf("11.delete all elements.\n");
printf("12.sort a list");
printf("\n-------------------------\n");
printf("enter you choice: ");
scanf("%d",&choice);
switch(choice){
case 1: head=create();
continue;
case 2: display(head);
continue;
case 3: printf("\nsuccessfully terminated");
	getch();
	exit(0);
case 4: head=insbeg(head);
continue;
case 5: head=insend(head);
continue;
case 6: head=insmid(head);
continue;
case 7: printf("\nthe list has %d elements",count(head));
	printf("\npress any key to continue...");
	getch();
continue;
case 8: head=delbeg(head);
continue;
case 9: head=delend(head);
continue;
case 10: head=delmid(head);
continue;
case 11: head=NULL;
	printf("your whole elements are deleted..\n");
	printf("press any key to continue......");
	getch();
continue;
case 12: sort(head);
continue;
default: printf("\ninvalid choice");
	 printf("\nchoose again");
continue;
}
}
return 0;
}

node *create()
{
node *p,*temp,*head;
clrscr();
head=(node*)malloc(sizeof(node));
head->next=NULL;
p=head;
printf("\nenter data to insert or -999 to stop");
scanf("%d",&p->info);

while(p->info!=-999)
{
temp=(node*)malloc(sizeof(node));
temp->next=NULL;
scanf("%d",&temp->info);
if(temp->info!=-999){
p->next=temp;
p=temp;
}
else{
printf("you list is successfully created");
printf("\npress any key to continue.....");
getch();
break;
}
}
return(head);
}


void display(node *head)
{
node *tmp;
tmp=head;
clrscr();
if(head==NULL)
{
printf("\nno element");
printf("\ninsert some element");
}
else
{
printf("\n your list is: ");
while(tmp!=NULL)
{
printf("\n%d",tmp->info) ;
tmp=tmp->next;
}
}
getch();
}

node *insbeg(node *head)
{
node *ins;
int num;
clrscr();
ins=(node*)malloc(sizeof(node));
ins->next=head;
printf("enter number to insert: ");
scanf("%d",&ins->info);
printf("element successfully inserted at begining");
printf("\npress any key to continue......");
getch();
return(ins);
}

node *insend(node *head)
{
node *tmp,*ins;
int num;
clrscr();
for(tmp=head;tmp->next!=NULL;tmp=tmp->next);
ins=(node*)malloc(sizeof(node));
tmp->next=ins;
ins->next=NULL;
printf("enter number to insert: ");
scanf("%d",&ins->info);
printf("element successfully inserted at the end");
printf("\npress any key to continue......");
getch();

return(head);
}

node *insmid(node *head)
{
node *tmp,*ins;
int num,pos,cout,i;
clrscr();
cout=count(head);
while(1)
{
printf("\n\nat which position you want to insert: ");
scanf("%d",&pos);
if(pos<1||pos>cout+1){
printf("\nyou entered wrong position");
printf("\npress any key to continue");
getch();
continue;
}
else{
ins=(node*)malloc(sizeof(node));
printf("\n\nenter number to insert");
scanf("%d",&num);
if(pos==1)
{
ins->info=num;
ins->next=head;
printf("element successfully inserted at first position");
printf("\npress any key to continue.....");
getch();
return(ins);
}
else
{
tmp=head;
for(i=2;i<pos;i++,tmp=tmp->next);
ins->info=num;
ins->next=tmp->next;
tmp->next=ins;
printf("element successfully inserted at %d position",pos);
printf("\npress any key to continue.......");
getch();
return(head);
}
}
}
}

int count(node *head)
{
int count;
for(count=0;head!=NULL;count++,head=head->next);
return(count);
}

node *delbeg(node *head)
{
if(head==NULL){
printf("there is no element in list\n insert some element first\nchoose any key to continue......");
getch();
}
else{
head=head->next;
printf("your first element successfully deleted");
printf("\npress any key to continue");
getch();
}
return(head);
}

node *delend(node *head)
{
node *temp;
if(head==NULL){
printf("there is no element in list");
printf("\nenter some element and try again");
printf("\npress any key to continue..........");
getch();
}
else if(count(head)==1){
head=NULL;
printf("element successfully deleted");
printf("\nthere is no element in the list");
}
else{
for(temp=head;temp->next->next!=NULL;temp=temp->next);
temp->next=NULL;
printf("your last element successfully deleted");
printf("\npress any key to continue");
getch();
}
return(head);
}

node *delmid(node *head)
{
node *temp;
int pos,cout;
cout=count(head);
temp=head;
if(head==NULL){
printf("there is no element for deletion..\npress any key to continue....");
getch();}

else{
printf("enter the position you wanna to delete");
scanf("%d",&pos);
if(pos==1)
head=head->next;
else{
for(cout=2;cout<pos;cout++,temp=temp->next);
temp->next=temp->next->next;

printf("your element successfully deleted from %d position",pos);
printf("\npress any key to continue....");
getch();
}
}
return(head);
}

void sort(node *head)
{
node *tmp1,*tmp2,*swap;
clrscr();
if(head==NULL)
{
printf("\nLallu sort karne ke liye elements hone chahiye.......");
printf("\npress any key to continue....");
getch();
return;
}
for(tmp1=head;tmp1->next!=NULL;tmp1=tmp1->next)
for(tmp2=tmp1->next;tmp2!=NULL;tmp2=tmp2->next)
if(tmp1->info>tmp2->info)
{
swap->info=tmp1->info;
tmp1->info=tmp2->info;
tmp2->info=swap->info;
}
printf("\n--your list has been sorted successfully\n");
printf("press any key to continue.........");
getch();
}

