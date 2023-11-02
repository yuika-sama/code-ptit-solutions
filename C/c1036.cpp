#include<stdio.h>
#include<math.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
long int n;
long int s=1;
scanld(n);
while (n>0){
s*=(n % 10);
n/=10;
}
printld(s);
}
