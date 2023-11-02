#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		deque<int> dq;
		for (int i=0; i<n; i++){
			while (!dq.empty() && a[dq.back()] <= a[i]){
				dq.pop_back();
			}
			dq.push_back(i);
			if (dq.front() < i - k + 1){
				dq.pop_front();
			}
			if (i+1 >= k){
				cout << a[dq.front()] << ' ';
			}
		}
		cout << endl;
	}
}
