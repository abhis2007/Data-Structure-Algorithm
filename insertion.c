#include<stdio.h>
int main(){
int *a,i,c=1,p,n,val;
printf("Enter Number Of Element:  ");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
printf("Enter Element %d: ",i);
scanf("%d",&a[i]);
}
ag:
printf("Enter Insertion position:  ");
scanf("%d",&p);
printf("Enter Insertion value:  ");
scanf("%d",&val);
for(i=n-1;i>=p-1;i--){
a[i+1]=a[i];
}
a[p-1]=val;
int *narray;
narray=(int *)malloc(sizeof(int)*(n+1));
for(i=0;i<=n;i++){
narray[i]=a[i];
}
while(c==1){
if(p<=n){
printf("New Aarray\n");
for(i=0;i<=n;i++){
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
