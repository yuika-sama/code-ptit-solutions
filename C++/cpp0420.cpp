#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct Num{
	int val, ab, id;
};
bool cmp(Num a, Num b){
	return ((a.ab < b.ab) || (a.ab == b.ab && a.id < b.id));
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		Num a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i].val;
			a[i].ab = abs(a[i].val - k);
			a[i].id = i;
		}
		sort(a, a+n, cmp);
		for (int i=0; i<n; i++){
			cout << a[i].val << ' ';
		}
		cout << endl;
	}
}