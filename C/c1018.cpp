#include<stdio.h>
#include<math.h>
int main(){
int t;
long int n;
scanf("%d",&t);
while(t--){
scanf("%ld", &n);
if ((long int)sqrt(n) * (long int)sqrt(n) == (float)n) printf("YES\n"); else printf("NO\n");
//printf("%f", sqrt(n));
}
}
