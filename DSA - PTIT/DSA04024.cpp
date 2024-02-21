#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
const ll c = 1e9+7;
ll d[11][11], a[11][11];
int n;
ll k;
void mult(ll a[11][11], ll b[11][11]){
	ll cc[11][11] = {0};
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			for (int q=1; q<=n; q++){
				cc[i][j] += a[i][q]*b[q][j];
				cc[i][j] %= c;
			}
		}
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			a[i][j] = cc[i][j];
		}
	}
}
void m_pow(ll a[11][11], ll k){
	if (k==1) return;
	m_pow(a, k/2);
	mult(a, a);
	if (k%2==1) mult(a, d);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				cin >> a[i][j];
				d[i][j] = a[i][j];
			}
		}
		m_pow(a, k);
		ll r = 0;
		for (int i=0; i<=n; i++){
			r += a[i][n];
			r %= c;
		}
		cout << r << endl;
	}
}