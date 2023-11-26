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
	int t;
	cin >> t;
	while (t--){
		int a[100000];
		int n;
		int f[100000];
		f[0] = 0;
		cin >> n;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			f[i] = f[i-1] + a[i];
		}
		int check = -1;
		for (int i=1; i<=n; i++){
			if (f[i-1] == f[n] - f[i]){
				check = i;
				break;
			}
		}
		cout << check << endl;
	}
}