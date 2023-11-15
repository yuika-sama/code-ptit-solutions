#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int n; cin >> n;
	int res = 0;
	string s[n+1];
	for (int i=0; i<n; i++){
		cin >> s[i];
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (j!=i and s[i].find(s[j])!=std::string::npos){
				res++;
			}
		}
	}
	cout << res;
}