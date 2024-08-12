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
void bfs(unordered_set<string> us, string s, string t){
	queue<string> q;
	q.push(s);
	int res = 1;
	string u;
	char c;
	while (q.sz){
		res++;
		queue<string> tmp = q;
		while (tmp.sz){
			u = tmp.front();
			tmp.pop();
			q.pop();
			for (int i=0; i<u.sz; i++){
				c = u[i];
				for (char j = 'A'; j<='Z'; j++){
					u[i] = j;
					if (u == t){
						cout << res;
						return;
					}
					if (us.find(u) != us.end()){
						q.push(u);
						us.erase(u);
					}
				}
				u[i] = c;
			}
		}
	}
}

void solve(){
	/*hav fun with coding*/
	int n;
	string s, t;	
	cin >> n >> s >> t;
	unordered_set<string> us;
	for (int i=0; i<n; i++){
		string e;
		cin >> e;
		us.ins(e);
	}
	if (s == t){
		cout << 1;
		return ;
	}
	bfs(us, s ,t);
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