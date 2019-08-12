#include<stdio.h>
int main(){
int *a,i,p,n,c=1;
printf("Enter Number Of Element\n");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
printf("Enter Element %d: ",i);
scanf("%d",&a[i]);
}
ag:
printf("Position Of Deletion\n");
scanf("%d",&p);
for(i=p-1;i<n;i++){
a[i]=a[i]+1;
}
int *narray;
narray=(int *)malloc(sizeof(int)*(n-1));
for(i=0;i<n-1;i++){
narray[i]=a[i];
}
while(c==1){
if(p<=n){
printf("New Array\n");
for(i=0;i<n-1;i++){
printf("%d ",narray[i]);
c=0;
}
}
else{
printf("Position Limit Exceeded\n");
goto ag;
}
}
}
