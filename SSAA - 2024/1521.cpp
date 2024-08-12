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


void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	stack<char> st;
	string num, tmp, a, res;
	res = "";
	for (auto i:s){
		if (i == ']'){
			num = tmp = "";
			while (st.sz and st.top() != '['){
				tmp += st.top();
				st.pop();
			}
			if (st.sz) st.pop();
			while (st.sz and isdigit(st.top())){
				num = st.top() + num;
				st.pop();
			}
			a = "";
			if (num == "") num = "1";
			int lim = 0;
			for (auto i:num){
				lim = lim*10 + i - '0';
			}
			for (int j=1; j<=lim; j++){
				a += tmp;
			}
			for (int j=a.sz-1; j>=0; j--){
				st.push(a[j]);
			}
		} else st.push(i);
	}
	while (st.sz){
		res = st.top() + res;
		st.pop();
	}
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