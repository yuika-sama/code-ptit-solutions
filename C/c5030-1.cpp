#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%lld " , n)
#define linedown printf("\n")
int main(){
	int t;
	scan(t);
	while (t--){
		int m,n;
		scan(m); scan(n);
		getchar();
		char s[1005][1005];
		for (int i=0; i<m; i++){
			scanf("%s", s[i]);
			//getchar();
		}
		long long dem = 0;
		int hang1[1005] = {0};
		int hang2[1005] = {0};
		int cot2[1005] = {0};
		int cot1[1005] = {0};
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				if (s[i][j] == '1'){
					hang1[i]++;
					cot1[j]++;
				}
				if (s[i][j] == '2'){
					hang2[i]++;
					cot2[j]++;
				}
			}
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				if (s[i][j] == '1') dem+=hang2[i]*cot2[j];
				else if(s[i][j] == '2') dem+=hang1[i]*cot1[j];
			}
		}
		print(dem); linedown;
	}
}
