#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int check(int n)
{
    int a=0,b=0;
    while(n) {
        if((n%10)%2==0) {
            a++;
        } else b++;
        n/=10;
    }
    if(a==b) {
        return 1;
    }
    return 0;
}
main(){
	faster();
	int n;
	cin >> n;
	int d = 0;
	for (int i=pow(10, n-1); i<pow(10, n); i++){
		if (check(i)){
			cout << i << ' ';
			d++; 
			if (d%10==0){
				cout << endl;
			}
		}
	}
}
