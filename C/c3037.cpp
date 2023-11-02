#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool isprime(int n){
	bool res = true;
	if (n<2) res = false;
	else if (n==2) res = true;
	else if (n!=2 && n%2==0) res = false;
	else {
		for (int i=3; i<=sqrt(n); i+=2){
			if(n%i==0){
				res = false;
				break;
			}
		}
	}
	return res;
}
main(){
	char s[20];
	int a[9];
	memset(a, 0, sizeof(a));
	scanf("%c", s);
	for (int i=0; i<=strlen(s); i++){
		if (s[i] == "2"){
			a[2]++;
		}
		if (s[i] == '3'){
			a[3]++;
		}
		if (s[i] == '5'){
			a[5]++;
		}
		if (s[i] == '7'){
			a[7]++;
		}
	}
	for (int i=1; i<=9; i++){
		if (a[i]>0) printf("%d %d\n", a[i], i);
	}
}
