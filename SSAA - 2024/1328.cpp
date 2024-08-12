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
const int oo = 1e9+7;

//end of template
int n;
long long k;
long long a[10][10], b[10][10];
const long long mod = 1e9+7;
void mul(long long a[10][10], long long b[10][10]){
	long long c[10][10] = {0};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			for (int k=0; k<n; k++){
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= mod;
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			a[i][j] = c[i][j];
		}
	}
}
void luythua(long long a[10][10], int k){
	if (k==1) return;
	luythua(a, k/2);
	mul(a,a);
	if (k%2==1){
		mul(a, b);
	}
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	for (int i=0; i<n; i++){
		for (int j=0; j<n;j++){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	luythua(a, k);
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}