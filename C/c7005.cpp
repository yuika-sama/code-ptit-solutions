#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")	
double cal(double a, double b, double c, double d){
	double x = c-a, y = d-b;
	return sqrt(x*x + y*y);
}
main(){
	int n; scan(n); getchar();
	for (int i=0; i<n; i++){
		double a,b,c,d,e,f;
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		double c1 = cal(a,b,c,d), c2 = cal(c,d,e,f), c3 = cal(e,f,a,b);
		if(c1+c2<=c3 || c2+c3<=c1 || c1+c3<=c2) printf("INVALID\n"); else{
			printf("%.03lf\n", c1+c2+c3);
		}
	}
}
