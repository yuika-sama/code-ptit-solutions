#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int res = 0;
int a[25][25];
int vs[25][25];
int n, k, Max;
int sum = 0;
void Try(int i, int j, int val){
	if (i==n-1 and j == n-1){
		if (val == k) res++;
		return;
	}
	if (val > k){
		return;
	}
	if (i+1 < n and !vs[i+1][j]){
		vs[i+1][j] = 1;
		Try(i+1, j, val + a[i+1][j]);
		vs[i+1][j] = 0;
	}
	if (j+1 < n and !vs[i][j+1]){
		vs[i][j+1] = 1;
		Try(i, j+1, val + a[i][j+1]);
		vs[i][j+1] = 0;
	}
}
void solve(){
	sum = 0;
	res = 0;
	memset(vs, 0, sizeof(vs));
	cin >> n >> k;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	Try(0, 0, a[0][0]);
	cout << res;
}
int main() {
    faster();
    int t; cin >> t;
    while (t--){
    	solve();
    	cout << endl;
	}
    return 0;
}