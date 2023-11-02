#include<stdio.h>
int main(){
int n; scanf("%d",&n);
int nam = n/365, tuan = (n - nam*365)/7 , ngay = n - nam*365 - tuan*7;
printf("%d %d %d",nam, tuan, ngay);
//2 0 3
//1 51 3
}
