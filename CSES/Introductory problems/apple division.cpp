#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int n;
ll res = 1e9+7;
int x[25];
ll a[25];
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n){
			ll r1 = 0, r2 = 0;
			for (int k=1; k<=n; k++){
				if (x[k] == 1) r1+=a[k];
				if (x[k] == 0) r2+=a[k];
			}
			res = min(abs(r1-r2), res);
		} else Try(i+1);
	}
}
main(){
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	memset(x, 0, sizeof(x));
	Try(1);
	cout << res;
}