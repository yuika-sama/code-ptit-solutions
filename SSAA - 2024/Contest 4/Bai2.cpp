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
/*đề bị ngược một chút, chính xác hơn thì đề sẽ như sau:
cho độ dài N và xâu nhị phân S. đếm số lượng xâu nhị phân P có độ dài N 
thoả mãn S là xâu con của P.
*/
void solve(){
	/*hav fun with coding*/
	int n;
	string s;
	cin >> n >> s;
	//bitstrings gen
	vector<string> v;
	for (int i=0; i<(1 << n); i++){
		bitset<32> bs(i);
		v.pb(bs.to_string().substr(32 - n));
	}
	//so khop chuoi
	int res = 0;
	for (auto i:v){
		if (i.find(s)!=string::npos){
			res++;
		}
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