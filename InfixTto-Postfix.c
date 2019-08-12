#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 55
int i,stack[MAX],top=-1;
char infix[MAX],postfix[MAX];
int eval(){
char symbol;
int h,first,second,result;
for(h=0;h<strlen(postfix);h++){
	printf("\n");
for(i=0;i<=top;i++){
printf("   %d",stack[i]);
}
printf("\n");
symbol=postfix[h];
switch(symbol){
case '+':
	if(top>=1){
	first=pop();
	second=pop();
	result=second+first;
	push(result);
	}
	break;
case '-':
	if(top>=1){
	first=pop();
	second=pop();
	result=second-first;
	push(result);
	}
	break;
case '*':
	if(top>=1){
	first=pop();
	second=pop();
	result=second*first;
	push(result);
	}
	break;	
case '/':
	if(top>=1){
	first=pop();
	second=pop();
	result=second/first;
	push(result);
	}
	break;
case '%':
	if(top>=1){
	int first=pop();
	int second=pop();
	int result=second%first;
	push(result);
	}
	break;
case '^':
	if(top>=1){
	first=pop();
	second=pop();
	result=pow(second,first);
	push(result);
	}
	break;
default:
	push(symbol-'0');
}
}
return pop();
}
infix_to_postfix(char infix[]){
int k=0,z,q;
char symbol,item,kl=-1;
infix[-1]="NULL";
for(i=0;i<strlen(infix);i++){
symbol=infix[i];
printf("%d.    %C.   Stack is:  ",i,infix[kl++]);
for(z=0;z<=top;z++){
printf("%c",stack[z]);
}
printf("    Postfix is:  ");
for(q=0;q<=k;q++){
printf("%c",postfix[q]);
}
printf("\n");
switch(symbol){
case ' ':
	break;
case '\t':
	break;
case '(':
	push(symbol);
	break;
case ')':
	while((top>-1)&& (stack[top]!='(')){
	item=pop();
	postfix[k++]=item;
	}
	if(top>-1)
	pop();
	break;
case '+':
case '-':
case '*':
case '/':
case '%':
case '^':
	if(top==-1)
	push(symbol);
	else if(stack[top]=='(')
	push(symbol);
	else if((priority(symbol))>(priority(stack[top]))){
	push(symbol);
	}
	else{
	while((top>-1)&&(priority(symbol)<=priority(stack[top]))){
	item=pop();
	postfix[k++]=item;
	}
	push(symbol);
	}
	break;
default:
	postfix[k++]=symbol;
}
}
}
int priority(symbol){
if(symbol=='(')
return 0;
else if((symbol=='+')||(symbol=='-'))
return 1;
else if((symbol=='*')||(symbol=='/')||(symbol=='%'))
return 2;
else if(symbol=='^')
return 3;
}
int pop(){
int item;
if(top==-1){
printf("Stack Underflow\n");
exit(1);
}
else{
item=stack[top];
top--;
}
return item;
}
void push(int item){
if(top==MAX-1){
printf("Stack Overflow\n");
exit(1);
}
else{
top++;
stack[top]=item;
}
}
int main(){
int n;
printf("Enter Infix:  ");
gets(infix);
infix[strlen(infix)]=')';
puts(infix);
infix_to_postfix(infix);
printf("Postfix is:  ");
for(i=0;i<(strlen(postfix));i++){
printf("%c",postfix[i]);
}
printf("\n%d",eval(postfix));

}

