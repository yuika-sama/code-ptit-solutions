#include<stdio.h>
#include<math.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
int n,sum = 1;
scand(n);
//bool res = false;
for (int i=2; i<=n/2; i++){
if (n%i==0){sum+=i;
}
}
if (sum == n) printf("1"); else printf("0");
}
