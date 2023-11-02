#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char a[50];
	scanf("%s", a);
	a[1] = 'a';
	a[2] = 100;
	printf("%s",a);
}
