#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
/*start of append*/
int append(){
struct node* temp;
struct node* root=NULL;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter Node Data");
scanf("%d",&temp->data);
temp->link=NULL;
if (root==NULL){
root=(struct node*)(&(temp->data));            //cccc
}
else{
struct node* p;
p=temp;                                       //cccccc
while(p->link!=NULL){
p=p->link;
}
p->link=(struct node*)(&(temp->data));
}
free(temp);
}
/*end of append*/


/* start of add at mid*/
addbegin(){
struct node *temp;
struct node* root=NULL;
printf("Enter Node Data");
scanf("%d",&temp->data);
temp->link=NULL;
if (root==NULL){

}
}
int main(){
append();
addmid();
}
