#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
typedef struct{
	int mu, heso;
} dathuc;
dathuc split(char a[]){
	dathuc s;
	s.heso = 0;
	s.mu = 0;
	int position = 0;
	for (int i=0; i<strlen(a); i++){
		if (isdigit(a[i])!=0){
			s.heso = s.heso*10 + (a[i] - '0');
		} else {
			position = i;
			break;
		}
	}
	for (int i=position+3; i<strlen(a); i++){
		s.mu = s.mu*10 + (a[i] - '0');
	}
	return s;
}
int sosanh(const void *a, const void *b){
	dathuc *x = (dathuc*) a;
	dathuc *y = (dathuc*) b;
	if (x->mu > y->mu) return -1; else return 1;
}
main(){
	int t;
	scan(t);
	getchar();
	while (t--){
		char a[10000], b[10000];
		gets(a);
		gets(b);
		dathuc d[10000];
		char *token = strtok(a, " ");
		int n = 0;
		while (token!=NULL){
			if (strcmp(token, "+")!=0){
				d[n++] = split(token);
			}
			token = strtok(NULL, " ");
		}
		token = strtok(b, " ");
		while (token!=NULL){
			if (strcmp(token, "+")!=0){
				d[n++] = split(token);
			}
			token = strtok(NULL, " ");
		}
		qsort(d, n, sizeof(dathuc), sosanh);
		for (int i=1; i<n; i++){
			if (d[i].mu == d[i-1].mu){
				d[i].heso += d[i-1].heso;
				d[i-1].heso = -1;
			}
		}
		for (int i=0; i<n; i++){
			if (d[i].heso!=-1){
				printf("%d*x^%d", d[i].heso, d[i].mu);
				if (i!=n-1) printf(" + ");
			}
		}
		linedown;
	}
}
