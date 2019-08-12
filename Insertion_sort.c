#include<stdio.h>
#include<stdlib.h>
insertion_sort(int a[],int n){
int i,j,temp;
for(i=1;i<=n-1;i++){
temp=a[i];
for(j=i-1;j>=0;j--){
if(temp<a[j]){
a[j+1]=a[j];
}
else{
a[j+1]=temp;
break;
}
}
a[j+1]=temp;
}
}
int main(){
int i,n,*a;
printf("Enter Number Of Elements:  ");
scanf("%d",&n);
a=(int *)calloc(sizeof(int),n);
for(i=0;i<n;i++){
printf("Enter %d Element:  ",i+1);
scanf("%d",&a[i]);
}
insertion_sort(a,n);
printf("Sorted Array Is:  ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
exit(1);
}
