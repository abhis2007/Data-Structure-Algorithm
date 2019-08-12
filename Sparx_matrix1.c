#include<stdio.h>
int main(){
int i,r,q=1,count=0,c,j,a[100][100],m[100][100];
printf("Enter No Of Row:  ");
scanf("%d",&r);
printf("Enter No Of Column:  ");
scanf("%d",&c);
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
if(a[i][j]!=0){
count+=1;//Non Zeroes Elements
}
}
printf("\n");
}
m[0][0]=r;m[0][1]=c;m[0][2]=count;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(a[i][j]!=0){
m[q][0]=i;m[q][1]=j;m[q][2]=a[i][j];
q++;
}
}
}
for(i=0;i<q;i++){
for(j=0;j<3;j++){
printf("     %d",m[i][j]);
}
printf("\n");
}
}
