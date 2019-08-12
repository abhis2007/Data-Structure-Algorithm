#include<stdio.h>
#include<stdlib.h>
void copy(int a[],int temp[],int lower,int upper){
int i;
for(i=lower;i<=upper;i++){
a[i]=temp[i];
}
}
merge(int a[],int temp[],int lower1,int upper1,int lower2,int upper2){
int i=lower1;
int j=lower2;
int k=0;
while((i<=upper1) && (j<=upper2)){
if(a[i]<a[j]){
temp[k++]=a[i++];
}
else{
temp[k++]=a[j++];
}
}
while(i<=upper1){
temp[k++]=a[i++];
}
while(j<=upper2){
temp[k++]=a[j++];
}
}
merge_sort(int a[],int lower,int upper){
int n,i,mid;
int *temp;
n=upper+1;
if(lower<upper){
mid=(lower+upper)/2;	
merge_sort(a,lower,mid);
merge_sort(a,mid+1,upper);
temp=(int *)malloc(sizeof(int)*n);
merge(a,temp,lower,mid,mid+1,upper);
copy(a,temp,lower,upper);
}
}
int main(){
int i,lower=0,n,*a;
printf("Enter No. Of Elements:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
merge_sort(a,lower,n-1);
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
