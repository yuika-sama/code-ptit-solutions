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
		int n, k; cin >> n >> k;
		int a[n+1];
		for (int i=1; i<=k; i++) cin >> a[i];
		int i = k;
		while (i>0 && a[i] >= n-k+i) i--;
		if (i!=0){
			a[i]++;
			for (int j=i+1; j<=k; j++){
				a[j] = a[i]+j-i;
			}
		} else {
//			int d = n;
			for (int i=1; i<=k; i++){
				a[i] = i;
			}
		}
		for (int i=1; i<=k; i++) cout << a[i] << ' ';
		cout << endl;
	}
}