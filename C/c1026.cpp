#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool solve(long int a){
bool res = true;
//return true;
for (int i = 2; i<=sqrt((double)a); i++){
if (a % i == 0){
res = false;
//return false;
break;
}
}
return res;
}
int main(){
int t;
long int n;
scanf("%d",&t);
while (t--){
scanf("%ld", &n);
if (solve(n)) printf("YES\n"); else printf("NO\n");
}
}
