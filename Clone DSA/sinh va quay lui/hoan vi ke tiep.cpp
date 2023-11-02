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
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[MAX];
		for (int i=1; i<=n; i++) cin >> a[i];
		int i = n-1;
		while (i>0 && a[i] > a[i+1]) i--;
		if (i<=0){
			for (int i=1; i<=n; i++){
				a[i] = i;
			}
		} else {
			int k = n;
			while (a[k]<a[i]) k--;
			swap (a[i], a[k]);
			int l = i+1, r = n;
			while (l<r){
				swap(a[l], a[r]);
				l++, r--;
			}
		}
		for (int i=1; i<=n; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
}