#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
int res = -1e9;
int BinToDec(string s) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = x * 2 + (s[i] - '0');
    }
    return x;
}

string DecToHec(int x) {
    string s = "";
    while (x > 0) {
        int mod = x % 16;
        if (mod < 10) s += mod + '0';
        else s += (mod - 10) + 'A';
        x /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	string a[105][105], dp[105][105];
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	dp[0][0] += a[0][0];
	for (int i = 1; i<n; i++){
		dp[0][i] = dp[0][i-1] + a[0][i];
		dp[i][0] = dp[i-1][0] + a[i][0];
	}
	for (int i=1; i<n; i++){
		for (int j=1; j<n; j++){
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
		}
	}
	string s = dp[n-1][n-1];
	while (s.size()%4){
		s = "0" + s;
	}
	for (int i=0; i<s.size(); i+=4){
		string sub = s.substr(i, 4);
		int decimal = BinToDec(sub);
		string hecimal = DecToHec(decimal);
		cout << hecimal;
	}
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}