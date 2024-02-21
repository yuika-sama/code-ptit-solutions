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
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin >> a[i];
		vector<int> f = a;
		sort(a.begin(), a.end());
		int i = 0, j = n-1;
		while (a[i] == f[i]) i++;
		while (a[j] == f[j] and j>i) j--;
		cout << i+1 << ' ' << j+1 << endl;
	}
}