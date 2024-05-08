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
int c = 1e9;
int n, k;
int a[35];	
void Try(int index, int val, int count){
	if (index == n or val >= k or count > c){
		if (val == k){
			c = min(c, count);
		}
		return;
	}
	Try(index+1, val, count);
	Try(index+1, val+a[index], count+1);
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	Try(0, 0, 0);
	if (c == 1e9) cout << -1; else cout << c;
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