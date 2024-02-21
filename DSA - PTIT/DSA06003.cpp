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
	while(t--){
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int r = 0;
		for (int i=0; i<n; i++){
			int k = i;
			for (int j=i+1; j<n; j++){
				if (a[j] < a[k]){
					k = j;
				}
			}
			if (k!=i){
				r++;
				swap(a[k], a[i]);
			}
		}
		cout << r << endl;
	}
}