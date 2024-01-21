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
		int n, k; 
		cin >> n >> k;
		int x[k+1];
		for (int i=1; i<=k; i++) cin >> x[i];
		bool check = false;
		for (int i=1; i<=k; i++){
			if (x[i] != n-k+i){
				check = true;
				break;
			}
		}
		if (check){
			int tmp = k;
			while (tmp > 0 and x[tmp] == n-k+tmp) tmp--;
			if (tmp > 0){	
				x[tmp] += 1;
				for (int i=tmp+1; i<=k; i++){
					x[i] = x[tmp] + i - tmp;
				}
				for (int i=1; i<=k; i++){
					cout << x[i] << ' ';
				}
			}
		} else {
			for (int i=1; i<=k; i++){
				cout << i << ' ';
			}
		}
		cout << endl;
	}
}