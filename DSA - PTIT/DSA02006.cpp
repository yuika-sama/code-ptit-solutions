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
int n,k;
bool check;
vector<int> a, b;
void solve(){
	int sum = 0;
	for (int i=0; i<b.size(); i++){
		sum = sum + a[b[i]];
	}
	if (sum == k){
		check = true;
		cout << '[';
		for (int i=0; i<b.size(); i++){
			cout << a[b[i]];
			if (i != b.size() - 1) cout << ' ';
		}
		cout << "] ";
	}
}
void Try(int i){
	for (int j=1; j>=0; j--){
		if (j==1) b.pb(i);
		if (i==n-1) solve(); else Try(i+1);
		if (j==1) b.pop_back();
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
		a.resize(n);
		for (int i=0; i<n; i++) cin >> a[i];
		check = false;
		sort(a.begin(), a.end());
		b.clear();
		Try(0);
		if (!check){
			cout << -1 << endl;
			continue;
		}
		cout << endl;
	}
}