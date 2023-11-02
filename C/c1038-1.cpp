#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
long int n;
scanld(n);
int first, last;
long int mid;


// define last number
last = n%10; 

//define first number
char snum[10]; // number converted to string
sprintf(snum, "%ld", n);
int num = strlen(snum); // get length of number
first = n - (n % ((int)pow(10, num-1)));
while (first>=10){
first/=10;
}

//define middle part
mid = (n % ((int)pow(10, num-1))) / 10;
// swap first and last
n = first;
first = last;
last = n;
//define if first = 0
if (first == 0) printf("%ld%d", mid, last); else printf("%d%ld%d", first, mid, last);
}
