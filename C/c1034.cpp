#include<stdio.h>
#include<math.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
int m,n,d=0,t=0;
int a[t+1];
scanf("%d%d", &m, &n);
if (sqrt(m)*sqrt(m)<m){
printd((int)sqrt(n)-(int)sqrt(m));
for (int i=sqrt(m)+1; i<=sqrt(n); i++){
printd(i*i);
}}else
{printd((int)sqrt(m)+1-(int)sqrt(n));
for (int i=sqrt(m); i<=sqrt(n); i++){
printd(i*i);
}
}}
