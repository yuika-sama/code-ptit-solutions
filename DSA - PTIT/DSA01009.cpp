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
vector<string> res;
string s;
int n, k;
bool check(){
	string z(k, 'A');
	int pos = s.find(z, 0);
	if (pos!=-1){
		string sub = s.substr(pos+1);
		if (sub.find(z) == -1){
			return true;
		}
	}
	return false;
}
void Try(int i){
	for (char j='A'; j<'C'; j++){
		s[i] = j;
		if (i == n-1){
			if (check()){
				res.pb(s);
			}
		} else Try(i+1);
	}
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	s.resize(n, 'A');
	Try(0);
	cout << res.size() << endl;
	sort(res.begin(), res.end());
	for (auto i:res){
		cout << i << endl;
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
	return 0;
}	