#include<stdio.h>
#include<math.h>
int main(){
int t;
long int n;
scanf("%d",&t);
while (t>=1){
scanf("%ld", &n);
printf("%lu\n",n*n);
t-=1;
}
}
