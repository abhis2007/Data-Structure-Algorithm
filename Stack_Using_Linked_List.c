#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int top=NULL;
push(int item){
struct node *tmp;
tmp=(int *)malloc(sizeof(struct node));
if(tmp==NULL){
printf("Stack Overflow\n");
}
else{
tmp->data=item
;tmp->link=top;
top=tmp;
}
printf("\n");
}
int pop(){
int item;
struct node *tmp;
if(top==NULL){
printf("Oops Stack Is Empty\n");
exit(1);
}
else{
tmp=top;
printf("Popped Out Element Is %d \n",tmp->data);
top=tmp->link;
tmp->link=NULL;
free(tmp);
}
printf("\n");
}
void display(){
struct node *tmp;
if(top==NULL){
printf("Stack Is Empty.\n");
}
else{
tmp=top;
while(tmp!=NULL){
printf("%d\n",tmp->data);
tmp=tmp->link;
}
}
printf("\n");
}
int peep(){
struct node *tmp;
tmp=top;
printf("Top Most Element Is :%d\n\n",tmp->data);
}
int main(){
int choice,item;
while(1){
printf("Enter 1. for Push\n");
printf("Enter 2. for Pop\n");
printf("Enter 3. for Display The Stack\n");
printf("Enter 4. for Peep\n");
printf("Enter 5. for Exit\n");
printf("Enter Your Choice:  ");
scanf("%d",&choice);
switch(choice){
case 1:
	printf("Enter Element To Push:  ");
	scanf("%d",&item);
	push(item);
	break;
case 2:
	pop();
	break;
case 3:
	display();
	break;
case 4:
	peep();
	break;
case 5:
	exit(1);
	break;
default:
	printf("Entered A Invalid Input Try Again.\n\n");
}
}
}
