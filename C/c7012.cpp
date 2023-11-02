#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct item{
	int id;
	char name[50], type[50];
	float buy, sell, profit;
};
void input(struct item item[], int i){
	getchar();
	item[i].id = i+1;
	gets(item[i].name);
	gets(item[i].type);
	scanf("%f %f", &item[i].buy, &item[i].sell); 
	item[i].profit = item[i].sell - item[i].buy;
}
void sort(struct item item[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(item[i].profit<item[j].profit){
				struct item temp = item[i];
				item[i] = item[j];
				item[j] = temp;
			}
		}
	}
}
void output(struct item item[], int i){
	printf("%d %s %s %.02f\n", item[i].id, item[i].name, item[i].type, item[i].profit);
}
main(){
	int n;
	scan(n);
	struct item x[100];
	for (int i=0; i<n; i++){
		input(x,i);
	}
	sort(x,n);
	for (int i=0; i<n; i++){
		output(x,i);
	}
}
