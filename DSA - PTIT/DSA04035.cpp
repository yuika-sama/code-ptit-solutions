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
const ll c = 1e9+7;
ll poww(ll a, ll b){
	if (b==0) return 1;
	ll tmp = poww(a, b/2);
	if (b%2==1) return (a * ((tmp*tmp)%c))%c;
	return (tmp*tmp)%c;
}
main(){
	faster();
	ll a, b;
	while (true){
		cin >> a >> b;
		if (a == 0 and b == 0) break;
		cout << poww(a, b) << endl;
	}
}