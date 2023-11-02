#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int compare(char a[], char b[]){
	if (strlen(a)>strlen(b)) return -1; else
	if (strlen(a)<strlen(b)) return -1;
	return strcmp(a,b);
}
void swap(char a[], char b[]){
	char tmp[200];
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}
void divide(char s[], char a[], char b[]){
	strncpy(a, s, strlen(s)/2);
	strncpy(b, s+strlen(s)/2, strlen(s)/2);
}
void sum(char a[], char b[], char res[]){
	if (compare(a,b)<0) swap(a,b);
	int i = strlen(a)-1;
	int j = strlen(b)-1;
	int n=i;
	res[n+1] = '\0';
	int remember = 0;
	while (j>=0){
		int digit = (a[i--] - '0') + (b[j--] -'0') + remember;
		remember = digit/10;
		res[n--] = digit%10 + '0';
 	}
 	while (i>=0){
 		int digit = a[i--] + '0' + remember;
 		remember = digit/10;
 		res[n--] = digit%10 +'0';
	}
	if (remember == 1) {
		char tmp[201];
		strcpy(tmp, res);
		char one[2] = {'1', '\0'};
		strcpy(res, one);
		strcat(res, tmp);
	}
}
void solve(){
	char a[201];
	scanf("%s", a);
	while (strlen(a)>1){
		char x[201], y[201], res[201];
		divide(a,x,y);	
		sum(x,y,res);
		puts(res);
		memset(a, '\0', sizeof(a));
		strcpy(a, res);
	}
}
main(){
	solve();
}
