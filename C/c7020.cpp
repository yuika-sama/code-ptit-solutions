#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct pokemon{
	char name[50];
	int k,m,e,stone;
};
void input(struct pokemon pkm[], int i){
	getchar();
	gets(pkm[i].name);
	scan(pkm[i].k);
	scan(pkm[i].m);
	pkm[i].e = pkm[i].m/pkm[i].k;
	pkm[i].stone += pkm[i].e*2 + pkm[i].m%pkm[i].k;
	while (pkm[i].stone >= pkm[i].k){
		pkm[i].e+=pkm[i].stone/pkm[i].k;
		int temp = pkm[i].stone/pkm[i].k;
		pkm[i].stone -= pkm[i].k*temp;
		pkm[i].stone += temp*2;
	}
}
void output(struct pokemon pkm[], int n){
	int max = -1, count = 0;
	char max_name[50];
	for (int i=0; i<n; i++){
		if (pkm[i].e > max){
			max = pkm[i].e;
		}
		count += pkm[i].e;
		printf("%s %d %d\n", pkm[i].name, pkm[i].e, pkm[i].stone);
	}
	print(count); linedown;
	for (int i=0; i<n ;i++){
		if (pkm[i].e == max){
		//	printf("%s\n", pkm[i].name);
		}
	}
}

main(){
	int n;
	scan(n);
	struct pokemon pkm[100];
	for (int i=0; i<n; i++){
		input(pkm,i);
	}
	output(pkm,n);
}
