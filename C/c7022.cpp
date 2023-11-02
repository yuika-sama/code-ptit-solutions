#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct sinhvien{
	int id;
	char name[50];
	float a,b,c;
};
void add(struct sinhvien sv[], int *num){
	sv[*num].id = *num+1;
	getchar();
	scanf("\n%[^\n]s", sv[*num].name);
	scanf("%f%f%f", &sv[*num].a, &sv[*num].b, &sv[*num].c);
	//sv[*num].sum = sv[*num].a + sv[*num].b + sv[*num].c;
	*num+=1;
}
void change(struct sinhvien sv[], int k){
	getchar();
	scanf("\n%[^\n]s", sv[k - 1].name);
	scanf("%f%f%f", &sv[k-1].a, &sv[k-1].b, &sv[k-1].c);
	//sv[k-1].sum = sv[k-1].a + sv[k-1].b + sv[k-1].c;
}
void display(struct sinhvien sv[], int n)
{
    for (int i=0; i<n; i++) {
    	if (sv[i].a <= sv[i].b && sv[i].b <= sv[i].c){
    		printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].id, sv[i].name, sv[i].a, sv[i].b, sv[i].c);
		}
       
    }
}
main(){
	int t=0;
	int n=0;
	struct sinhvien sv[100];
	while (1){
		scan(t);
		if (t == 1){
			//int n;
			int k;
			scan(k);
			for (int i=0; i<k; i++){
				add(sv, &n);
			}
			print(k); linedown;
		}else
		if (t==2){
			int k;
			scan(k);
			change(sv, k);
			print(k); linedown;
		}
		if (t==3) break;
	}
	display(sv, n);
}
