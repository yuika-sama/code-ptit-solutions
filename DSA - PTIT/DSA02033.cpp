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
		if (n<=3) continue;
		int a[11];
		for (int i=1; i<=n; i++){
			a[i] = i;
		}
		do{
			bool x = true;
			for (int i=1; i<n; i++){
				if (abs(a[i] - a[i+1]) == 1){
					x = false;
					break;
				}
			}
			if (x){
				for (int i=1; i<=n; i++){
					cout << a[i];
				}
				cout << endl;
			}
		} while (next_permutation(a+1, a+1+n));
		cout << endl;
	}
}