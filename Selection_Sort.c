#include<stdio.h>
#include<stdlib.h>
int i,j,temp;
selection_sort(int a[],int n){
for(i=0;i<n-1;i++){   //in this algo we select minimum and put it on first
for(j=1+i;j<=n-1;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
int main(){
int i,n,*a;
printf("Enter Number Of Elements:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
printf("Enter %d Element:  ");
scanf("%d",&a[i]);
}
selection_sort(a,n);
printf("Sorted Array Is:  ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
