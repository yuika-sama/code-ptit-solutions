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
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		string s;
		int x;
		for (int i=0; i<n; i++){
			cin >> x;
			s.pb(x + '0');
		}
		string t;
		for (int i=1; i<=n; i++){
			t.pb(i + '0');
		}
		vector<string> v;
		do{
			v.pb(t);
		} while (next_permutation(t.begin(), t.end()));
		int d = 1;
		for (string x:v){
			if (x != s){
				d++;
			} else {
				break;
			}
		}
		cout << d << endl;
	}
}