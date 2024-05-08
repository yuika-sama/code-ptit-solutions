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
int a[20], x[20];
void Try(int i){
	for (int j = x[i-1]+1; j<=n-k+i; j++){
		x[i] = j;
		if (i==k){
			for (int i=1; i<=k; i++){
				cout << a[x[i]] << ' ';
			}
			cout << endl;
		} else Try(i+1);
	}
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	memset(a, 0, sizeof(a));
	memset(x, 0, sizeof(x));
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	Try(1);
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