#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct triagle{
	int a,b,c;
	float dientich;
};
float dt(struct triagle x){
	float p = (x.a+x.b+x.c)/2;
	return sqrt(p*(p-x.a)*(p-x.b)*(p-x.c));
}
void input(struct triagle x[], int i){
	scan(x[i].a);
	scan(x[i].b);
	scan(x[i].c);
	x[i].dientich = dt(x[i]);
}
void sapxep(struct triagle x[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (x[i].dientich > x[j].dientich){
				struct triagle temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
void output(struct triagle x[], int i){
	printf("%d %d %d\n", x[i].a, x[i].b, x[i].c);
}
main(){
	int n;
	scan(n);
	//getchar();
	struct triagle x[100];
	for (int i=0; i<n; i++){
		input(x,i);
		//dientich(x);
	}
	sapxep(x,n);
	for (int i=0; i<n; i++){
		output(x,i);
	}
}
