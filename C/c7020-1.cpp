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
	char name[50];
	int k,m,xtra,count;
}pkm;
int dem = 0, max;
void input(pkm pkm[], int i){
	getchar();
	scanf("%s", pkm[i].name);
	scan(pkm[i].k); scan(pkm[i].m);
	//pkm[i].count = 0;
	while (pkm[i].k<=pkm[i].m){
		dem+=1;
		pkm[i].m -= pkm[i].k;
		pkm[i].m += 2;
		pkm[i].count+=1;
	}
	max = fmax(max, pkm[i].count);
}

main(){
	int n;
	scan(n);
	pkm pkm[100];
	for (int i=0; i<n; i++){
		pkm[i].count = 0;
		input(pkm, i);
	}
	print(dem); linedown;
	for (int i=0; i<n; i++){
		if (pkm[i].count == max){
			printf("%s\n", pkm[i].name, pkm[i].count);
			break;//in ra con xuat hien dau tien
		}
	}
}
