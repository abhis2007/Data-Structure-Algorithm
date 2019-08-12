#include<stdio.h>
void shell_sort(int a[],int n){
int i,j,temp,gap;
for(gap=n/2;gap>=1;gap/=2){//4 2 1
for(i=gap;i<n;i++){
for(j=i-gap;j>=0;j-=gap){
if(a[j+gap]>a[j]){
break;
}
else{
temp=a[j+gap];
a[j+gap]=a[j];
a[j]=temp;
}
}
}
}
}
int main(){
int i,*a,n;
printf("Enter Number Of Elements:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
shell_sort(a,n);
printf("Sorted Array Is:  ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
