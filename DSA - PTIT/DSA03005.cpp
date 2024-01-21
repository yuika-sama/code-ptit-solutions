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
		int n, k;
		cin >> n >> k;
		int a[n+5];
		int s = 0;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			s+=a[i];
		}
		sort(a+1, a+1+n);
		int x = min(k, n-k);
		for (int i=1; i<=x; i++){
			s -= 2*a[i];
		}
		cout << s << endl;
	}
}