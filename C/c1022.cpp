#include<stdio.h>
int solve(long int n){
int sum = 0;
while (n>0){
sum += n % 10;
n/=10;
}
return sum;
}
int main(){
int t;
long int n;
scanf("%d", &t);
while(t--){
scanf("%ld",&n);
printf("%d\n", solve(n));
}
}
