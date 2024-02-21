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
int bs(int a[], int l, int r, int x){
	while (l<=r){
		int m = (l+r)/2;
		if (a[m] == x) return 1;
		if (a[m] > x) r = m-1; else l = m+1;
	}
	return -1;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, x; cin >> n >> x;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		cout << bs(a, 0, n-1, x) << endl;
	}
}