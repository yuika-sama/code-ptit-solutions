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

bool isLast(int x[], int n, int k){
	int d = 0;
	for (int i=k; i>=1; i--){
		if (x[i] != n-d){
			return false;
		}
		d++;
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	int n, k; cin >> n >> k;
	int x[k+5];
	for (int i=1; i<=k; i++) cin >> x[i];
	if (isLast(x, n, k)){
		for (int i=1; i<=k; i++){
			cout << i << ' ';
		}
		return;
 	} 
	int i = k;
	while (i>0 and x[i] == n-k+i) i--;
	if (i > 0){
		x[i]++;
		for (int j = i+1; j<=k; j++){
			x[j] = x[i] - i + j;
		}
	}
	for (int i=1; i<=k; i++) cout << x[i] << ' ';
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