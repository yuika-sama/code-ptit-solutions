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
	int n; cin >> n;
	vector<int> a,b;
	int x;
	for (int i=1; i<=n; i++){
		cin >> x;
		if (i%2==0) b.pb(x); else a.pb(x);
	}
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	for (int i=0; i<b.size(); i++){
		cout << a[i] << ' ' << b[i] << ' ';
	}
	if (n%2==1) cout << a.back();
}