#include<stdio.h>
//#include<algorithm>
long int solve(long int a,long int b){
  while (a != b){  
        if (a > b)  
            {  
            a = a - b;   
            }  
            // otherwise, it returns the num2.  
        else  
            {  
                b = b - a;  
                }     
                  
    }   
return a;
}
int main(){
int t;
long int a,b;
scanf("%d", &t);
while(t--){
scanf("%d%d",&a,&b);
printf("%ld\n", solve(a,b));}
}

