#include<stdio.h>
bubble_sort(int a[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main(){
int *a,i,n;
printf("Enter Number Of Elements:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
printf("Enter %d Elements:",i+1);
scanf("%d",&a[i]);
}
bubble_sort(a,n);
printf("Your Sorted Element is:  ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
