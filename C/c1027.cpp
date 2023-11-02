#include<stdio.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld", n)
int phantich(int n){
int i=2;
int dem = 0;
int a[100];
while (n>1){
if (n%i==0){
n/=i;
a[dem++] = i;
}
else
{
i++;
}
}
for (i = 0; i<dem -1; i++){
printd(a[i]);
}
printd(a[dem-1]);
}
int main(){
int t;
int n;
scand(n);
while (n--){
scand(t);
phantich(t);
printf("\n");
}
}
