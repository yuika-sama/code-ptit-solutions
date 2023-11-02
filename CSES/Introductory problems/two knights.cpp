#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
ll step(ll i){
	if (i==1) return 0;
	return i*i*(i*i-1)/2 - 4*(i-1)*(i-2);
}
main(){
	int n; cin >> n;
	for (ll i=1; i<=n; i++){
		cout << step(i) << endl;
	}
}