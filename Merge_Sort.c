#include<stdio.h>
int merge_sort(int a1[],int a2[],int n,int m){
//m<n ? min=m : min=n;
int i,j=0,*c,k=0;
c=(int *)malloc(sizeof(int)*(m+n));
while((i<m) && (j<n)){
if(a1[i]<a2[j]){
c[k++]=a1[i++];
}
else{
c[k++]=a2[j++];
}
}
printf("%d %d",i,j);
while(i<m){
c[k++]=a1[i++];
}
while(j<m){
c[k++]=a2[j++];
}
for(i=0;i<(m+n);i++){
printf("%d ",c[i]);
}
}
int main(){
int *a,*b,i,m,j,n;
printf("Enter No. Of Elements For First Array:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*(n+1));
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter No. Of Elements For Second Array:  ");
scanf("%d",&m);
b=(int *)malloc(sizeof(int)*(m+1));
for(i=0;i<m;i++){
scanf("%d",&b[i]);
}
merge_sort(a,b,n,m);
}
