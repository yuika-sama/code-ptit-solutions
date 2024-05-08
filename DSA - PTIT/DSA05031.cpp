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
	cout << f[n];
}
main(){
	faster();
	f[1] = 1, f[2] = 2, f[3] = 3;
	for(int i=4; i<=10000; i++){
		f[i] = i;
		for (int j=1; j*j<=i; j++){
			f[i] = min(f[i], f[i-j*j]+1);
		}
	}
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}