#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n, a[10];
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	vector<vector<int>> v;
	do{
		vector<int> t;
		for (int i=0; i<n; i++) t.pb(a[i]);
		v.pb(t);
	} while (next_permutation(a, a+n));
	sort(v.begin(), v.end());
	for (auto it:v){
		for (auto it1:it){
			cout << it1 << ' ';
		}
		cout << endl;
	}
}