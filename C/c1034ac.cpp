//ac
#include<stdio.h> 
#include<math.h> 
int main(){ 
int m,n; 
scanf("%d%d",&m,&n); 
int i; 
int a = sqrt(m); 
int b = sqrt(n); 
if(a * a < m){ 
printf("%d\n",b-a); 
for(i=a+1;i<=b;i++){ 
printf("%d\n",i*i); } } 
else{ printf("%d\n",b-a+1); 
for(i=a;i<=b;i++){ 
printf("%d\n",i*i); } } 
return 0; }
