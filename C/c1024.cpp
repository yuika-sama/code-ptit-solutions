#include<stdio.h>
#include<string.h>

int main(){
char a[10];
int n;
scanf("%d", &n);
while(n--){
scanf("%s",a);
if (a[0]==a[strlen(a)-1]) printf("YES\n"); else printf("NO\n");
}
}
