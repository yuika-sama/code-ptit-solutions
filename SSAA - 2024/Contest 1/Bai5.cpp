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
vector<int> f(100001, 0);
int maxPrimeFactors(int n)
{
    int max_div = -1;
    int i = 2;
    while (i * i <= n) {
        while (n % i == 0) {
            max_div = i;
            n = n / i;
        }
        i = i + 1;
    }
    if (n > 1) {
        max_div = n;
    }
    return max_div;
}
void solve(){
	// /*hav fun with coding*/
	int x, y;
	cin >> x >> y;
	ll sum = 0;
	for (int i=x; i<=y; i++){
		sum += f[i];
	}
	cout << sum;
}
main(){
	faster();
	int T = 1;
	f[1] = 0;
	for(int i=2; i<=100000; i++){
		f[i] = maxPrimeFactors(i);
	}
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}