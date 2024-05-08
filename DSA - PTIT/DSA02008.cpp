#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
int n, k;
vector<vector<int>> c, r;
vector<int> x;
bool vs[25];
void cal(){
	int sum = 0;
	for (int i=0; i<n; i++){
		sum += c[i][x[i]];
	}
	if (sum == k){
		r.pb(x);
	}
}
void Try(int i){
	for (int j=0; j<n; j++){
		if (!vs[j]){
			x[i] = j;
			vs[j] = true;
			if (i == n-1){
				cal();
			} else Try(i+1);
			vs[j] = false;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	c.resize(n, vector<int>(n));
	r.clear();
	x.clear(); x.resize(n, 0);
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> c[i][j];
		}
	}
	for (int i=0; i<n; i++) x[i] = i;
	memset(vs, false, sizeof(vs));
	Try(0);
	cout << r.size() << endl;
	for (auto i:r){
		for (auto j:i){
			cout << j+1 << ' ';
		}
		cout << endl;
	}
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}