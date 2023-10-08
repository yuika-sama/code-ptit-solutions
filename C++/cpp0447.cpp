#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		priority_queue<int, vector<int>, less<int> > a;
		for (int i=0; i<n; i++){
			int r; cin >> r;
			a.push(r);
		}
		while (k){
			cout << a.top() << ' ';
			a.pop();
			k--;
		}
		cout << endl;
	}
}
