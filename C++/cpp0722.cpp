#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int s[20005], a[20005], len, n;
void add(int x, int delta){
	for (int i=2; i*i<=x; i++){
		while (x%i==0){
			s[i]+=delta;
			x/=i;
		}
	}
	if (x!=1) s[x]+=delta;
}
void mul(int x){
	len+=5;
	for (int i=0; i<len; i++) a[i]*=x;
	for (int i=0; i<len; i++){
		a[i+1] += a[i]/10;
		a[i]%=10;
	}
	while (len>0 && a[len-1] == 0) len--;
}
main(){
	cin >> n;
	n++;
	for (int i=1; i<=n; i++) add(2*n-i+1, 1);
	for (int i=1; i<=n+1; i++) add(i, -1);
	a[0] = len = 1;
	for (int i=1; i<20005; i++){
		while (s[i]--){
			mul(i);
		}
	}
	for (int i=len-1; i>=0; i--) cout << a[i];
}