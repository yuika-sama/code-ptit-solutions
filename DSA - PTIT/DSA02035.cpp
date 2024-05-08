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
string a[10], b[10];

void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	for (int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	int x[k+1];
	int res = 1e9;
	for (int i=0; i<k; i++) x[i] = i;
	do {
		for (int i=0; i<n; i++){
			for (int j=0; j<k; j++){
				b[i][j] = a[i][x[j]];
			}
		}
		sort(b, b+n);
		int mn = stoi(b[0]);
		int mx = stoi(b[n-1]);
		res = min(res, mx - mn);

	} while (next_permutation(x, x+k));
	cout << res;
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