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
	strncpy(a, s, strlen(s)/2);
	strncpy(b, s+strlen(s)/2, strlen(s)/2);
}
void swap(char a[], char b[]){
	char tmp[200];
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}
void getsum(char s[]){
	char a[100], b[100];
	divide(s,a,b);
	puts(a); puts(b);
	if (compare(a,b)<0) swap(a,b);
	int i=strlen(a)-1;
	int j=strlen(b)-1;
	char res[100];
	int n=i;
	res[n+1] = '\0';
	int remember = 0;
	while (j>=0){
		int digit = (a[i--] - '0') + (b[j--] - '0') + remember;
		remember = digit/10;
		res[n--] = digit%10 + '0';
	}
	while (i>=0){
		int digit = (b[j--] - '0') + remember;
		remember = digit/10;
		res[n--] = digit%10 + '0';
	}
	if(res[0] == '0'){
		for (int i=0; i<strlen(s); i++){
			s[i] = s[i+1];
		}
		s[strlen(s)] = '\0';
	}
	puts(res);
	strcpy(s, res);
}
main(){
	char s[200];
	gets(s);
	while (strlen(s)>1){
		getsum(s);
	}
}
