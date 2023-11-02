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
	char name[50], dob[20];
	float toan, ly, anh, tong;
	//bool mark = false;
};
float max = -1;
void input(struct thisinh x[], int i){
	getchar();
	x[i].id = i+1;
	gets(x[i].name);
	gets(x[i].dob);
	scanf("%f%f%f", &x[i].toan, &x[i].ly, &x[i].anh);
	x[i].tong = x[i].toan + x[i].ly + x[i].anh;
	max = fmax(x[i].tong, max);
}
void output(struct thisinh x[], int n){
	for (int i=0; i<n; i++){
		if (x[i].tong == max){
			printf("%d %s %s %.01f\n", x[i].id, x[i].name, x[i].dob, x[i].tong);
		}
	}
}
main(){
	int n;
	scan(n);
	struct thisinh x[100];
	for (int i=0; i<n; i++){
		input(x,i);
	}
	output(x,n);
}
