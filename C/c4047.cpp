#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) print("%d " , n)
#define linedown printf("\n")
main(){
	int n;
	int q[100][3];
	scan(n);
	for (int i=0; i<n; i++){
		scan(q[i][1]);
		scan(q[i][2]);
	}
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (q[i][1]>q[j][1]){
				int temp = q[i][1];
				q[i][1] = q[j][1];
				q[j][1] = temp;
				
				temp = q[i][2];
				q[i][2] = q[j][2];
				q[j][2] = temp;
			}
		}
	}
	long int sum = 0;
	for (int i=0; i<n; i++){
		if (q[i][1]>=sum){
			sum+=q[i][2];
		} else sum=sum+q[i][1]+q[i][2];
		printf("%ld ", sum);	
	}
	//printf("%ld", sum);
	
}
