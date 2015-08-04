#include"stdio.h"
int main(){
int i,j,a[5][5]={0},n,m;
for(i=0;i<5;i++){
for(j=0;j<5;j++)scanf("%d",&a[i][j]);}
scanf("%d%d",&n,&m);
if(n>=0&&n<5&&m>=0&&m<5){
for(i=0;i<5;i++){
j=a[m][i];a[m][i]=a[n][i];a[n][i]=j;}
for(i=0;i<5;i++){
for(j=0;j<5;j++)printf("%4d",a[i][j]);
printf("\n");}}
else printf("error");return 0;}