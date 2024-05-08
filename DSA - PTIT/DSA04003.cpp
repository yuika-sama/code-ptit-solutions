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
/*
giai thich test case
intput: 3, output = 4
(1, 1, 1)
(2, 1)
(1, 2)
(3)
-> so xau nhi phan co tong s[i]*i == n
*/
const ll c = 123456789;
ll poww(ll a, ll b){
	if (b==0) return 1;
	ll tmp = poww(a, b/2);
	if (b%2==1) return (a * ((tmp*tmp)%c))%c;
	return (tmp*tmp)%c;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll n; cin >> n;
		cout << poww(2, n-1) << endl;
	}
}