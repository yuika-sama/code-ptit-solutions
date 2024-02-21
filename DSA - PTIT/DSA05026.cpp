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
	int c, n;
	cin >> c >> n;
	int f[c+1] = {};
	f[0] = 1;
	for (int i=1; i<=n; i++){
		int w; cin >> w;
		for (int j=c; j>=w; j--){
			if (f[j] == 0 and f[j-w] == 1){
				f[j] = 1;
			}
		}
	}
	for (int i=c; i>=0; i--){
		if (f[i] == 1){
			cout << i;
			break;
		}
	}
//	cout << r;
}