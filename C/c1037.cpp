#include<stdio.h>
#include<math.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
int m,n;
scand(m); scand(n);
int a,b;
if (m>n){a=m; b=n;
}else{a=n; b=m;
}
printd((a-b+1)*(a+b)/2);
}
