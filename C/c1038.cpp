#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
int main(){
char a[10], b[10];
gets(a);
int x = strlen(a);
if (a[strlen(a)-1] == '0'){
strncpy(b, a, x-1);
//puts(b);
} else
{
strncpy(b, a, x);
}
/*puts(b);
printf("%c\n",b[0]);
printf("%c\n",b[strlen(b)-1]);*/
char c = b[strlen(b)-1];
b[strlen(b)-1] = b[0];
b[0] = c;
puts(b);
//int x = strlen(a);
//puts(a);
}
//printf("%s",b);

