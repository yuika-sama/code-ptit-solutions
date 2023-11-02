#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 100
using namespace std;
int n;
int x[100], a[100];
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s;cin >> s;
		for (int i=0; i<s.size(); i++){
			x[i+1] = s[i] - '0';
		}
		n = s.size();
		int i = n;
		while (i>0 && x[i]==1){
			x[i] = 0;
			i--;
		}
		if (i>0) x[i] = 1;
		for (int i=1; i<=n; i++){
			cout << x[i];
		}
		cout << endl;
	}
}