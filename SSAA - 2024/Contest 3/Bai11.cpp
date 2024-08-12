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
const ll x = 1e9+7;

void solve(){
	/*hav fun with coding*/
    int n, m, k;
    cin >> n >> m >> k;
    long long a[n + 1], b[m + 1], f[n + 1][m + 1][k + 1] = {}, mod = 1e9 + 9;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] > b[j])
                f[i][j][1] = 1;
            else
                f[i][j][1] = 0;
        }
    }
    for (int p = 1; p <= k; p++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                f[i][j][p] += f[i - 1][j][p] + f[i][j - 1][p] - f[i - 1][j - 1][p];
                if (a[i] > b[j])
                    f[i][j][p] += f[i - 1][j - 1][p - 1];
                f[i][j][p] %= mod;
            }
        }
    }
    while (f[n][m][k] < 0)
        f[n][m][k] += mod;
    cout << f[n][m][k];
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