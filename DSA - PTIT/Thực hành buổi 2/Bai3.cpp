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
ll calculate(ll a, ll b, string c){
	if (c == "+") return a+b;
	if (c == "-") return a-b;
	if (c == "–") return a-b;
	if (c == "*") return a*b;
	if (c == "/") return a/b;
	return 0;
}
int convert(string a){
	ll t = 0;
	bool negative;
	if (a[0] == '-') negative = true; else negative = false;
	for (int i=0; i<a.size(); i++){
		if (a[i] == '-') continue;
		t = t*10 + a[i] - '0';
	}
	if (negative == true) t = -t;
	return t;
}
void solve_prefix(string a[], int n){
	stack<ll> st;
	for(int i=n-1; i>=0; i--){
		if (a[i] == "+" or a[i] == "-" or a[i] == "*" or a[i] == "/" or a[i] == "–"){
			ll x = st.top(); st.pop();
			ll y = st.top(); st.pop();
			ll z = calculate(x, y, a[i]);
			st.push(z);
		} else {
			st.push(convert(a[i]));
		}
	}
	cout << st.top();
}
void solve_postfix(string a[], int n){
	stack<ll> st;
	for(int i=0; i<n; i++){
		if (a[i] == "+" or a[i] == "-" or a[i] == "*" or a[i] == "/" or a[i] == "–"){
			ll x = st.top(); st.pop();
			ll y = st.top(); st.pop();
			ll z = calculate(y, x, a[i]);
			st.push(z);
		} else {
			st.push(convert(a[i]));
		}
	}
	cout << st.top();
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	string a[1005];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	if (a[0] == "+" or a[0] == "-" or a[0] == "*" or a[0] == "/" or a[0] == "–"){
		solve_prefix(a, n);
	} else {
		solve_postfix(a, n);
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