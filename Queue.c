#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int queue[MAX],rear=0,front=0;
//queue=(int *)calloc(sizeof(int),MAX);
//queue[MAX];
int insert(){
int item;
printf("Enter Element To Insert:  ");
scanf("%d",&item);
if(rear==MAX){
printf("\nQueue Is Over Please Wait Until Place Become Vacant\n\n");
return;
}
else{
queue[rear]=item;
rear+=1;
}
}
void delete(){
int item,i;
if(front==rear){
printf("No One Is In Queue\n");
return;
}
else{
item=queue[front];
for(i=0;i<rear-1;i++)
queue[i]=queue[i+1];
printf("%d Has Been Leaved Out The Queue\n",item);
rear-=1;
}
}
int display(){
int i;
for(i=0;i<rear;i++){
printf("%d\n",queue[i]);
}
}
int main(){
int n,choice;
while(1){
printf("Enter 1. For Insert\n");
printf("Enter 2. For Delete\n");
printf("Enter 3. For Display\n");
printf("Enter 4. For Quiet\n");
printf("Enter Your Choice:  ");
scanf("%d",&choice);
switch(choice){
case 1:
	insert();
	break;
case 2:
	delete();
	break;
case 3:
	display();
	break;
case 4:
	printf("You Have Leave Out Queue Successfully");
	exit(1);
default:
	printf("Enter A Valid Input\n");
}
}
}
