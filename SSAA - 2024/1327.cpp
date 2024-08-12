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
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int c = 1e9+7;

//end of template
long long n; 
long long f[2][2], m[2][2];
void mul(long long f[2][2], long long m[2][2]){
	long long x = (f[0][0]*m[0][0]%c + f[0][1]*m[1][0]%c)%c;
	long long y = (f[0][0]*m[0][1]%c + f[0][1]*m[1][1]%c)%c;
	long long z = (f[1][0]*m[0][0]%c + f[1][1]*m[1][0]%c)%c;
	long long t = (f[1][0]*m[0][1]%c + f[1][1]*m[1][1]%c)%c;
	f[0][0] = x; f[0][1] = y;
	f[1][0] = z; f[1][1] = t;
}
void pow(long long f[2][2], long long n){
	if (n<=1) return;
	pow(f, n/2);
	mul(f, f);
	if (n&1) mul(f, m);
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	f[0][0] = f[0][1] = f[1][0] = 1;
	f[1][1] = 0;
	m[0][0] = m[0][1] = m[1][0] = 1;
	m[1][1] = 0;
	if (n==0){
		cout << 0;
	} else {
		pow(f, n-1);
		cout << f[0][0];
	}
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}