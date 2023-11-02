#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	vector<string> res;
	res.pb("");
	for (int i=0; i<n; i++){
		int l = res.size();
		for (int j = l-1; j>=0; j--){
			res.pb(res[j]);
		}
		l*=2;
		for (int j=0; j<l; j++){
			if (j < l/2){
				res[j] += '1';
			} else res[j]+='0';
		}
	}
	for (int i=0; i<res.size(); i++){
		cout << res[i] << endl;
	}
	
}