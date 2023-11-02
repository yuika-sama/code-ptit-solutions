#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t) ;
	while(t--){
		int a[]={1000,500,200,100,50,20,10,5,2,1}; // xep tu lon den be bi de check cac menh gia lon hon1 
		int n;
		int cnt=0; 
		scanf("%d",&n); 
		for(int i=0;i<=9;i++){
			while(n>=a[i]){
			 n=n-a[i];
			cnt++;
		}
		}
		printf("%d\n",cnt); 
	} 
	return 0; 
}
