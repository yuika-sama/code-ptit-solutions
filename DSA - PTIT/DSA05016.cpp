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
int f[10005];

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	cout << f[n-1];
}
main(){
	faster();
	memset(f, 0, sizeof(f));
	int a = 0, b = 0, c = 0;
	f[0] = 1;
	for (int i=1; i<=10000; i++){
		f[i] = min(f[a]*2, min(f[b]*3, f[c]*5));
		if (f[i] == f[a]*2)a++;
		if (f[i] == f[b]*3)b++;
		if (f[i] == f[c]*5)c++;
	}
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}