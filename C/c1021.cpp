#include<stdio.h>
int main(){
long int n;
scanf("%ld", &n);
int sum = 0;
while (n>0){
sum += n % 10;
n/=10;
}
printf("%d", sum);
}
