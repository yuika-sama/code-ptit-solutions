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
int dp[MAX][1<<MAX];
int a[MAX][MAX];
int n;
int solve(int i, int mask){
	if (i==n) return 0;
	if (dp[i][mask] != -1) return dp[i][mask];
	int ans = 0;
	for (int j=0; j<n; j++){
		if ((mask >> j) & 1) continue;
		ans = max(ans, a[i][j] + solve(i+1, mask | (1<<j)));
	}
	return dp[i][mask] = ans;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}	
		memset(dp, -1, sizeof(dp));
		cout << solve(0, 0) << endl;
	}
}