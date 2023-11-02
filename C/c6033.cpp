#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	while (1){
		scan(t);
		getchar();
		if (t==0) break;
		char a[t+10],b[t+10],s[2*t+10];
		scanf("%s%s%s",a,b,s);
		int step = 0;
		//char ans[200];
		bool check = false;
		while (step<50){
			char ans[2*t+10];
			for (int i=0; i<2*t+10; i++) ans[i] = NULL;
			int k = 0;
			for (int i=0; i<t; i++){
				ans[k++] = b[i];
				ans[k++] = a[i];
			}
			step++;
			for (int i=0; i<t; i++){
				a[i] = ans[i];
				b[i] = ans[t+i]; 
			}
			if (strcmp(ans, s) == 0) {
				check = true;
				break;
			}
		}
		if (check){
			print(step);
		} else print(-1);
		linedown;
	}
}

