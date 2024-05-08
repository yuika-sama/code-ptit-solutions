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
bool prime(int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}

void solve(){
	/*hav fun with coding*/
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vector<vector<int>> res;
	for (int i=0; i<(1<<n); i++){
		bitset<32> bs(i);
		string s = bs.to_string().substr(32-n);
		int sum = 0;
		vector<int> v;
		for (int i=0; i<s.size(); i++){
			if (s[i] == '1'){
				sum += a[i];
				v.pb(a[i]);
			}
		}
		if (prime(sum)){
			sort(v.begin(), v.end());
			reverse(v.begin(), v.end());
			res.pb(v);
		}
	}
	sort(res.begin(), res.end());
	for (auto i:res){
		for (auto j:i){
			cout << j << ' ';
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
		cout << endl;
	}
	return 0;
}