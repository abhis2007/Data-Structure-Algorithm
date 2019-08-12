#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1,arr[MAX];  
display(){
int i;
if (top==-1){
printf("Stack Is Empty");
exit(1);
}
else{
for(i=top;i>=0;i--){
printf("%d\n",arr[i]);
}
}
}
int peep(){
if(top==-1){
printf("Stack Is Blank\n");
exit(1);
}
else{
return arr[top];
}
}
int push(item){
if (top==MAX-1){
printf("OVERFLOW\n");
exit(1);
}
else{
top++;
arr[top]=item;
}
}
int pop(){
int item;
if(top==-1){
printf("UNDERFLOW\n");
exit(1);
}
else{
item=arr[top];
top-=1;
return item;
}
}
int main()
{
int n,choice;
while(1){
printf("1 For Pu1sh\n");
printf("2 For Pop\n");
printf("3 For Peep\n");
printf("4 For Display The Stack\n");
printf("5 For Quit\n");
scanf("%d",&choice);
switch(choice){
case 1:
	printf("Enter Item To Be Push\n");
	scanf("%d",&n);
	push(n);
	break;
case 2:
	printf("Popped Out Item Is: %d\n",pop());
	break;
case 3:
	printf("Item At Top Is: %d\n",peep());
	break;
case 4:
	display();
	break;
case 5:
	exit(1);
default:
	printf("Enter Wrong Input\n");
}
}
}
