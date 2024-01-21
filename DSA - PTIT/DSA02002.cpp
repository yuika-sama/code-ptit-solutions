#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
vector<string> res;
void display(vector<int> a){
	string t;
	t.pb('[');
	for (int i=0; i<a.size()-1; i++){
		t += to_string(a[i]);
		if (i!=a.size() - 2) t.pb(' ');
	}
	t.pb(']');
	res.pb(t);
}
void Try(vector<int> a){
	if (a.size() == 1) return;
	display(a);
	vector<int> t;
	for (int i=0; i<a.size()-1; i++){
		t.pb(a[i] + a[i+1]);
	}
	Try(t);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		res.clear();
		int n; cin >> n;
		vector<int> a(n+1);
		for (int i=0; i<n; i++) cin >> a[i];
		Try(a);
		for (int i=res.size() - 1; i>=0; i--){
			cout << res[i] << ' ';
		}
		cout << endl;
	}
}