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
		int n;
		cin >> n;
		string s; 
		cin >> s;
		int a[255] = {0};
		int m = 0;
		for (int i=0; i<s.size(); i++){
			a[s[i]]++;
			m = max(m, a[s[i]]);
		}
		if (m <= ceil((float)s.size()/n))cout << 1 << endl; else cout << -1 << endl;
	}
}