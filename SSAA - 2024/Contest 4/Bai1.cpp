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
const int oo = 1e9+7;

//end of template
int a[15], _sum = 0, s[4];
bool vs[15];
int Try(int gr, int id, int sum, int pre){
	//gr: current group(gr/4)
	//id: amount of people in current group
	//sum: current group's sum
	//pre: just pick peoples from index[pre]
	int res = 1e9;
	if (gr==3){
		s[3] = _sum - s[0] - s[1] - s[2];
		int MAX = *max_element(s, s+4);
		int MIN = *min_element(s, s+4);
		return min(res, MAX - MIN);
	}
	for (int i=pre; i<12; i++){
		if (!vs[i]){
			vs[i] = true;
			if (id == 2){
				s[gr] = sum + a[i];
				res = min(res, Try(gr+1, 0, 0, 0));
			} else {
				res = min(res, Try(gr, id+1, sum + a[i], i+1));
			}
			vs[i] = false;
		}
	}
	return res;
}
void solve(){
	/*hav fun with coding*/	
	for (int i=0; i<12; i++) cin >> a[i], _sum += a[i];
	memset(vs, false, sizeof(vs));
	cout << Try(0,0,0,0);
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		// cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}