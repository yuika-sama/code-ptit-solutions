#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)

int main(){
int t;
scand(t);
char s[10];
while (t-->0){
gets(s);
int odd=0, nodd=0;
for (int i=0; i<=strlen(s)-1; i++){
if (s[i] == '0' || s[i] == '2' || s[i] == '4' ||  s[i] == '6' || s[i] == '8' ) odd++;
if (s[i] == '1' || s[i] == '3' || s[i] == '5' ||  s[i] == '7' || s[i] == '9' ) nodd++;
}
printf("%d %d\n", nodd, odd);
}
}
