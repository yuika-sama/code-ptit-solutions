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
	vector<int> v(2*1e5 + 1, 0);
	for (int i=0; i<n-1; i++){
		int x; cin >> x;
		v[x]++;
	}
	for (int i=1; i<=n; i++){
		if (v[i] == 0){
			cout << i;
			break;
		}
	}
}