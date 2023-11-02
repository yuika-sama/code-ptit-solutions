#include<stdio.h>
#include<math.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int giaithua(int n){
if (n==1 || n==0) return 1; else
return n*giaithua(n-1);
}
int main(){
int n;
scand(n);
int sum = 0;
int m = n;
while (m>0){
sum+=giaithua(m%10);
m/=10;
}
if (sum == n) printf("1"); else printf("0");
}
