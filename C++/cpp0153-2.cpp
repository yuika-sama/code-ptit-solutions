#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long sum(int n){
	return n*(n+1)/2;
}
main(){
	faster()
	int t; cin >> t;
	while(t--){
		int n; long long k;
		cin >> n >> k;
		long long x = n%k;
		//k * (k-1)/2: tổng của k-1 số đầu tiên
		//n/k: số lần xuất hiện dãy 1,2,3,...,k-1,0 khi modulo i cho k
		//sum(n%k): số lượng dãy dẫn đến trường hợp n<k
		double res = (double)(k*(k-1))/2 * (n/k) + sum(x);
		cout << precision(0) << res << endl;
	}
}
