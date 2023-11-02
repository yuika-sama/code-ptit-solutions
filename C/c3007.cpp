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
bool isprime(long int n){
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
bool palindrome(int n){
	bool res = true;
	int m=0;
	int temp = n;
	int count = 0;
	char s[7];
	sprintf(s, "%d", n);
	int x = strlen(s);
	while (temp>0){
		if (temp%10 ==0 ) {
			count++;
			temp/=10;
		}
		m += (temp%10)*(int)pow(10, x-count);
		count++;
		temp/=10;
	}
	m/=10;
	if (n ==m ) res = true; else res = false;
	return res;
}
bool third(int n){
	char s[7];
	sprintf(s, "%d", n);
	if (strlen(s)==3) return true; else return false;
}
main(){
	int t; 
	scand(t);
	/*if (palindrome(t)) printf("YES"); else printf("NO");
	linedown;
	if (isprime(t)) printf("YES"); else printf("NO");*/
	int m,n;
	while (t--){
		scand2(m,n);
		int cnt = 0;
		for (int i=m; i<=n; i++){
			if (isprime(i) && palindrome(i)){
				printd(i);
				cnt++;
				//printd(cnt);
				if (cnt%10==0){
					linedown;
				}
			}
		}
		linedown;
	}
}
