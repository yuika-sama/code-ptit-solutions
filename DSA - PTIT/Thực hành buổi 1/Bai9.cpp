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

//ac
//end of template
const int mod = 1e9+7;
int n, k;
struct mtrx{
	ll m[15][15];
	mtrx operator * (mtrx a){
		mtrx res, b = *this;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				res.m[i][j] = 0;
				for (int z = 0; z<n; z++){
					res.m[i][j] += (a.m[i][z] * b.m[z][j])%mod;
					res.m[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
mtrx poww(mtrx a, int b){
	if (b == 1) return a;
	mtrx res = poww(a, b/2);
	res = res * res;
	if (b%2==1) res = res*a;
	return res;
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	mtrx a, res;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> a.m[i][j];
		}
	}
	res = poww(a, k);
	ll cal = 0;
	for (int i=0; i<n; i++){
		cal += res.m[n-1][i];
		cal %= mod;
	}
	cout << cal;
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