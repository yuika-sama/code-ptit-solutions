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


//end of template
typedef string bint;
bint operator*(string a, int b){
	if (a=="0" or b == 0) return "0";
	int n = a.size();
	bint c(n, '0');
	int rem = 0;
	for (int i=n-1; i>=0; --i){
		rem += (a[i]-'0') * b;
		c[i] = rem%10 + '0';
		rem /= 10;
	}
	if (rem > 0){
		c = to_string(rem) + c;
	}
	return c;
}
bint catalan(int n){
	vector<int> word;
	for (int i=n+2; i<=2*n; i++) word.pb(i);
	for (int i=2; i<=n; i++){
		int x = i;
		for (int j=0; j<word.size() and x>1; j++){
			int d = __gcd(word[j], x);
			x /= d;
			word[j] /= d;
		}
	}
	bint res = "1";
	for (int i=0; i<word.size(); i++){
		res = res * word[i];
	}
	return res;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	cout << catalan(n);
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