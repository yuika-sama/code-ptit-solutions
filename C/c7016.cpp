#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct thisinh{
	int id;
	char name[50], dob[50];
	float a,b,c,tong;
};
void input(struct thisinh x[], int n){
	for (int i=0; i<n; i++){
		getchar();
		x[i].id = i+1;
		gets(x[i].name);
		gets(x[i].dob);
		scanf("%f%f%f", &x[i].a, &x[i].b, &x[i].c);
		x[i].tong = x[i].a + x[i].b + x[i].c;
	}
}
void sort(struct thisinh x[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(x[i].tong<x[j].tong){
				struct thisinh temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
void output(struct thisinh x[], int n){
	for (int i=0; i<n; i++){
		printf("%d %s %s %.01f\n", x[i].id, x[i].name, x[i].dob, x[i].tong);
	}
}
main(){
	int n;
	scan(n);
	struct thisinh x[100];
	input(x,n);
	sort(x,n);
	output(x,n);
}
