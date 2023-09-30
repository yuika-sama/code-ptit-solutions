#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
	
void Try(int a, int n, int c, int b){
	if (n==0) return;
	Try(a, n-1, b, c);
	cout << a << ' ' << c << endl;
	Try(b, n-1, c, a);
}
//a: source, b: mid, c: des
main(){
	int n; cin >> n;
	cout << ((1<<n) - 1) << endl;
	Try(1, n, 3, 2);
}