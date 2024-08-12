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
/*
Ý tưởng: thử thay 3 ký tự (a, b, c) vào tất cả từng vị trí của các xâu được truy vấn
(từ s -> s1),
nếu tìm thấy xâu s1 trong list xâu được cho ban đầu thì tức là có tìm thấy 
*/
unordered_set<string> v;
bool Find(string &s){
	for (int j=0; j<s.sz; j++){
		char c = s[j];
		for (char k = 'a'; k<= 'c'; k++){
			if (k!=c){
				s[j] = k;
				if (v.find(s) != v.end()) return true;
			}
		}
		s[j] = c;
	}
	return false;
}

void solve(){
	/*hav fun with coding*/
	int n, m; cin >> n >> m;
	while (n--){
		string s; cin >> s;
		v.ins(s);
	}
	while (m--){
		string s; cin >> s;
		cout << (Find(s)? "YES" : "NO") << endl;
	}
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}