#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long cal(long long n){
	return n*n*(n*n-1)/2 - 4*(n-1)*(n-2);
	// so o tren ban co con trong de dat quan ma - to hop 2 cua n de quan ma thu 2 an quan ma thu 1
}
main(){
	int n; cin >> n;
	cout << 0 << endl;
	for (long long i = 2; i<=n; i++){
		cout << cal(i) << endl;
	}
	//idk why but it just can be run if we let i = long long
}