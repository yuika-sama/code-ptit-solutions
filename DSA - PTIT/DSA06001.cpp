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
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n, greater<int>());
		for (int i=0; i<n/2 + (n%2==1); i++){
			if (i!=n-i-1) cout << a[i] << ' ' << a[n-i-1] << ' ';
			else cout << a[i];
		}
		cout << endl;
	}
}