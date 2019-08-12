#include<stdio.h>
#include<stdlib.h>
int bin_search(){
int *a,i,mid,min=0,max,n,search;
printf("Enter Number Of Elements:  ");
scanf("%d",&n);
a=(int *)calloc(sizeof(int),n);
for(i=0;i<n;i++){
printf("Enter Element %d:  ",i+1);
scanf("%d",&a[i]);
}
max=n-1;
printf("Enter Element That You Want To Search:   ");
scanf("%d",&search);
while(min<=max){
mid=(min+max)/2;
if(search>a[mid]){
min=mid+1;
}
else{
if(search<a[mid]){
max=mid-1;
}
else{
return mid;
}
}
}
return -1;
}
int main(){
int n;
n=bin_search();
(n==-1) ? printf("Element Not Found\n"):printf("Searched Element Found At:  %d",n);
}
