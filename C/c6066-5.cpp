#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int compare(char a[], char b[]){
	if (strlen(a)>strlen(b)) return -1; else if (strlen(a)<strlen(b)) return -1; else return strcmp(a,b);
}
void divide(char s[], char a[], char b[]){
	int n = strlen(s);
	for (int i=0; i<n; i++){
		if (i<n/2) a[i] = s[i];
		else b[n-i-1] = s[i];
	}
}
void swap(char a[], char b[]){
	char tmp[200];
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}
void getsum(char s[], char a[], char b[]){
	char res[205];
	int remember = 0;
	int i = strlen(a) - 1;
	int j = strlen(b) - 1;
	int k = strlen(a);
	res[k+1] = '\0';
	while (i>=0 && j>=0){
		int digit = (a[i] - '0') + (b[j] - '0') + remember;
		remember = digit/10;
		digit%=10;
		res[k] = digit + '0';
		i--;j--;k--;
	}
	while (i>=0){
		int digit = (a[i] - '0') + remember;
		remember = digit/10;
		digit%=10;
		res[k] = digit + '0';
		i--;k--; 
	}
	while (j>=0){
		int digit = (b[i] - '0') + remember;
		remember = digit/10;
		digit%=10;
		res[k] = digit + '0';
		j--;k--;
	}
	if(remember > 0){
		char temp[105];
		strcpy(temp, "1");
		strcat(temp, res);
		strcpy(res, temp);
	}
	puts(res);
	strcpy(s, res);
}
main(){
	char s[200];
	gets(s);
	while (strlen(s)>1){
		char a[105], b[105];
		divide(s,a,b);
		getsum(s,a,b);
	}
}
