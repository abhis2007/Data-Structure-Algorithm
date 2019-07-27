#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
int append(){
struct node* temp;
struct node* root=NULL;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter Node Data");
scanf("%d",&temp->data);
temp->link=NULL;
if (root==NULL){
root=(struct node*)(&(temp->data));
}
else{
struct node* p;
p=root;
while(p->link!=NULL){
p=p->link;
}
p->link=(struct node*)(&(temp->data));
}
}
int main(){
append();
}
