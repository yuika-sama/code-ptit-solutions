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
bool isprime(int n){
	bool check = true;
	if (n<2) check = false; else
	if (n==2) check = true; else
	if (n>2 && n%2==0) check = false; else
	{
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i==0){
				check = false;
				break;
			}
		}
	}
	return check;
}
bool is(int n){
	int s = 0;
	while (n){
		if (n%10 != 2 and n%10 != 3 and n%10!=5 and n%10 != 7) return false;
		s += n%10;
		n/=10;
	}
	return isprime(s);
}
void solve(){
	/*hav fun with coding*/
	int l, r; cin >> l >> r;
	int c = 0;
	for (int i=l; i<=r; i++){
		if (isprime(i) and is(i)){
			c++;
		}
	}
	cout << c;
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