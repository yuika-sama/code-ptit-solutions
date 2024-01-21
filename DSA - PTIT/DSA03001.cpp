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
int f[11] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int d = 0;
		int i = 9;
		while (n >= 0){
			if (n-f[i] >= 0){
				n -= f[i];
				d++;
			} else {
				i--;
			}
			if (n==0) break;
		}
		cout << d << endl;
	}
}