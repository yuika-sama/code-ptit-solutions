#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 20
using namespace std;
main(){
	faster();
	ll f[100];
	f[1] = 1, f[2] = 1;
	for (int i=3; i<=93; i++){
		f[i] = f[i-1] + f[i-2];
	}
	int t;
	cin >> t;
	while (t--){
		ll n, k;
		cin >> n >> k;
		while (true){
			if (n==1 or n==2){
				if (n==1) cout << 'A'; else if (n==2) cout << 'B';
				break;
			}
				if (k > f[n-2]){
					k-=f[n-2];
					n--;
				} 
				else 
					n-=2;
		}
		cout << endl;
	}
}