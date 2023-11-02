#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int compare(char a[], char b[]){ //so sanh do dai chuoi
	if (strlen(a)>strlen(b)) return 1; else if (strlen(a)<strlen(b)) return -1;
	return strcmp(a,b);
}
void swap(char a[], char b[]){ //trao doi 2 chuoi
	char tmp[500];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
}
void solve(){
	char a[501], b[501];
	scanf("%s %s", a,b);
	if(compare(a,b)<0){
		swap(a,b);
	}
	int i = strlen(a) - 1;
	int j = strlen(b) - 1;
	char res[505];
	int n=i;
	res[n+1] = '\0';
	int remember = 0;
	while (j>=0){
		int digit = (a[i--] - '0') + (b[j--] - '0') + remember;
		remember = digit/10;
		res[n--] = digit%10 + '0';
	}
	while (i>=0){
		int digit = (a[i--] -'0') + remember;
		remember = digit/10;
		res[n--] = digit%10 + '0';
	}
	if (remember == 1) printf("1");
	puts(res);
}
main(){
	int t;
	scan(t);
	getchar();
	while (t--){
		solve();
	}
}
