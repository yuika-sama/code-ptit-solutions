#include<stdio.h> 
int main() { 
int n,a; 
scanf("%d",&n); 
while (n--) { 
scanf("%d",&a); 
if (a > 0) { 
printf("%.15f\n",(double)1/a); } } 
return 0; }
