#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int compare(char a[], char b[]){
	if (strlen(a)>strlen(b)) return 1; else
	if (strlen(a)<strlen(b)) return -1; 
	return strcmp(a,b);
}
void swap(char a[], char b[]){
	char tmp[1001];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
}
void solve(){
	char a[1001], b[1001], res[1005];
	scanf("%s %s", a,b);
	if (compare(a,b)==0){
		printf("0\n");
		return;
	}
	if (compare(a,b)<0) swap(a,b);
	int i = strlen(a) - 1;
	int j = strlen(b) - 1;
	int n=i;
	res[n+1] = '\0';
	int remember = 0;
	while (j>=0){
		int digit = (a[i--] - '0') - (b[j--] - '0') - remember;
		if (digit<0){
			digit+=10;
			remember = 1;
		} else remember = 0;
		res[n--] = digit%10 + '0';
	}
	while (i>=0){
		int digit = (a[i--] - '0') - remember;
		if(digit<0){
			digit+=10;
			remember = 1;
		} else remember = 0;
		res[n--] = digit%10 + '0';
	}
	bool check = false;
	for (int k=0; k<strlen(a); k++){
		if (res[k]!='0' && !check){
			check = true;
		}
		if (check){
			printf("%c", res[k]);
		}
	}
	linedown;
}
main(){
	int t;
	scan(t);
	getchar();
	while(t--){
		solve();
	}
}
