#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
double d = b*b - 4*a*c;
if (d<0) printf("NO"); else
if (d==0) printf("%0.2lf", -(float)b / (2*(float)a)); else
printf("%0.2lf %0.2lf", (-(float)b+sqrt((float)d)) / (2*(float)a),(-(float)b-sqrt((float)d)) / (2*(float)a));
}
}
