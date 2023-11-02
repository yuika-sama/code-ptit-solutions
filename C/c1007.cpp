#include<stdio.h>
#include<math.h>
int main(){
long int a,b;
scanf("%ld%ld", &a, &b);
printf("%ld\n%ld\n%ld\n%ld\n%ld\n%0.2lf", a+b, a-b, a*b, a/b, a%b, (float)a/(float)b);
}
