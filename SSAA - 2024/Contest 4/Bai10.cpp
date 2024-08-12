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
#define sqr(x) x*x
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
const ll oo = 1e15+7;
int m[5] = {1,3,6,12,23};
//end of template
struct mat{
	ll f[4][4] = {
		{1,0,0,0},
		{0,1,1,0},
		{1,1,0,1},
		{0,1,0,0}
	};
};
ll mul(ll a, ll b){
	if (b <= 1) return a%oo * b;
	ll tmp = mul(a, b/2);
	if (b%2==0) return tmp%oo + tmp%oo;
	return tmp%oo + tmp%oo + a%oo;
}
mat operator*(mat a, mat b){
	mat c;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			c.f[i][j] = 0;
			for (int k=0; k<4; k++){
				c.f[i][j] += mul(a.f[i][k], b.f[k][j])%oo;
				c.f[i][j] %= oo;
			}
		}
	}
	return c;
}
mat mat_pow(mat s, ll k){
	if (k == 1) return s;
	mat tmp = mat_pow(s, k/2);
	if (k%2==0) return tmp*tmp;
	return tmp*tmp*s;
}
void solve(){
	/*hav fun with coding*/
	ll n; cin >> n;
	if (n<=5){
		cout << m[n-1];
		return;
	}
	mat x;
	mat s = mat_pow(x, n+2);
	cout <<  s.f[2][0] - 1;
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


// 1 2 3 6  11 20 37 68  125 230 423 778
// 1 3 6 12 23 43 80 148 273 503 926 1704
