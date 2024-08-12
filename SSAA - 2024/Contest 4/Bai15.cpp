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
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+9;

//end of template


void solve(){
    /*hav fun with coding*/
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n+5], b[m+5];
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int j=1; j<=m; j++) cin >> b[j];
    sort(a+1, a+1+n);
    sort(b+1, b+1+m);
    ll f[n+1][m+1][k+1] = {};
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i] > b[j]){
                f[i][j][1] = 1;
            } else 
                f[i][j][1] = 0;
        }
    }
    for (int p=1; p<=k; p++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                f[i][j][p] += f[i-1][j][p] + f[i][j-1][p] - f[i-1][j-1][p];
                if (a[i] > b[j]){
                    f[i][j][p] += f[i-1][j-1][p-1];
                }
                f[i][j][p] %= oo;
            }
        }
    }
    while (f[n][m][k] < 0){
        f[n][m][k] += oo;
    }
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
    cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}