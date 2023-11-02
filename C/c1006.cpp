#include<stdio.h>
int main(){
long int a,b;
scanf("%ld%ld",&a,&b);
if (b==0) printf("0"); else
printf("%ld %ld %ld %0.2lf %ld",a+b,a-b,a*b,(float)a/(float)b,a%b);
}
