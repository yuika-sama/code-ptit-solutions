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
int f[25];
int res, r1, r2, r3, sum;

void Try(int x){
	for (int i=1; i<=3; i++){
		if (i == 1){
			r1 += f[x];
			if (r1 > sum){
				r1 -= f[x];
				continue;
			}
		}
		if (i == 2){
			r2 += f[x];
			if (r2 > sum){
				r2 -= f[x];
				continue;
			}
		}
		if (i == 3){
			r3 += f[x];
			if (r3 > sum){
				r3 -= f[x];
				continue;
			}
		}
		if (x == n-1){
			if (r1 == r2 and r2 == r3){
				res++;
			}
		} else Try(x+1);
		if (i == 1) r1 -= f[x];
		if (i == 2) r2 -= f[x];
		if (i == 3) r3 -= f[x];
	}
}
void solve(){
	/*hav fun with coding*/	
	res = sum = r1 = r2 = r3 = 0;	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> f[i];
		sum += f[i];
	}
	if (sum % 3 != 0){
		cout << 0;
		return;
	}
	sum /= 3;
	Try(0);
	cout << res;
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