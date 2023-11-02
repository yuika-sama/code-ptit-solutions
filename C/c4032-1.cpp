#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
bool incr(long int n){
    bool check = true;
    int c=n%10;
    n/=10;
    while (n>0){
        if (n%10>c){
            check = false;
            break;
        }
        c=n%10;
        n/=10;
    }
    return check;
}
void swap(long int *a, long int *b){
	long int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
    long int a[100000];
    long int x;
    int d=0;
    long int max=-1, min=1000000001;
    //nhap
    while((scanf("%ld",&x))!=-1){
    	if (incr(x)) {
    		a[d++] = x;
    		max = fmax(max, x);
    		min = fmin(min, x);
		}
	}
	//dem phan phoi
    long int b[100001] = {0};
    for (int i=0; i<d-1; i++){
    	for (int j=i+1; j<d; j++){
    		if (a[i] == a[j] && a[i]!=-1){
    			b[a[i]]++;
    			a[j]=-1;
			}
		}
	}
	//idk why =D
	for (int i=0; i<d; i++){
		if (a[i]!=-1) b[a[i]]++;
	}
	//sap xep theo so lan xuat hien
	for (int i=0; i<d-1; i++){
		for (int j=i+1; j<d; j++){
			if (a[i]!=-1 && a[j]!=-1 && b[a[i]]<b[a[j]]){
				swap(&b[a[i]], &b[a[j]]);
				swap(&a[i], &a[j]);
			}
		}
	}
	//xuat
	for (int i=0; i<d; i++){
		if (a[i]!=-1){
			printf("%ld %ld\n", a[i], b[a[i]]);
		}
	}
}
