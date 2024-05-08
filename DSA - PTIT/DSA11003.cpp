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
int pos = 0;
void prof(int a[], int b[], int l, int r, unordered_map<int, int> &m){
	if (l<=r){
		int index = m[b[pos++]];
		prof(a, b, l, index-1, m);
		prof(a, b, index+1, r, m);
		cout << a[index] << ' ';
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	int a[1005], b[1005];
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<n; i++) cin >> b[i];
	unordered_map<int, int> m;
	for (int i=0; i<n; i++){
		m[a[i]] = i;
	}
	pos = 0;
	prof(a, b, 0, n-1, m);
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}