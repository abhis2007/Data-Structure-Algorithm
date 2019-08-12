#include<stdio.h>
#include<stdlib.h>
int top=NULL;
struct node{
int data;
struct node *link;
};
create_linked_list(){
struct node *tmp;
tmp=(int *)malloc(sizeof(struct node));
printf("Enter Node Data:  ");
scanf("%d",&tmp->data);
tmp->link=top;
top=tmp;
}
insert_at_end(int item){
struct node *tmp;
tmp=(int *)malloc(sizeof(struct node));
tmp->data=item;
tmp->link=top;
top=tmp;
}
/*
insert_at_begin(int item){
struct node *tmp;
tmp=(int *)malloc(sizeof(struct node));
tmp->data=item;
tmp->link=NULL;
}
*/
int delete_at_end(){
struct node *tmp;
tmp=top;
printf("Popped Out Elemenr Is: %d\n",tmp->data);
top=tmp->link;
tmp->link=NULL;
}
int display(){
struct node *tmp;
tmp=top;
int i;
while(tmp!=NULL){
printf("%d\n",tmp->data);
tmp=tmp->link;
}
}
int main(){
int choice,item;
while(1){
printf("Enter 1. for Create Linked List\n");
printf("Enter 2. for Insert At End\n");
printf("Enter 3. for Delete At End\n");
printf("Enter 4. for Display The Linked List\n");
printf("Enter 5. for Exit\n");
printf("Enter Your Choice:  ");
scanf("%d",&choice);
switch(choice){
case 1:
	create_linked_list();
	break;
case 2:
	printf("Enter Element To Insert\n");
	scanf("%d",&item);
	insert_at_end(item);
	break;
case 3:
	delete_at_end();
	break;
case 4:
	display();
	break;
case 5:
	exit(1);
	break;
default:
	printf("Entered A Invalid Input Try Again.\n\n");
}
}
}
