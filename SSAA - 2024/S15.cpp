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

//ac
//end of template
ll f[31][31] = {};
void solve(){
    /*hav fun with coding*/
    int n;
    cin >> n;
    cout << f[n][0];
}
main(){
    faster();
    f[0][0] = 1;
    f[1][0] = f[0][1] = 1;
    for (int i=0; i<=30; i++){
        for (int j=0; j<=30; j++){
            if (i==0)f[i][j] = 1;
            if (j==0)f[i][j] = f[i-1][1];
            if (i and j) f[i][j] = f[i-1][j+1] + f[i][j-1];
        }
    }
    int T = 1;
    cin >> T;
    while (T--){
        solve();
        cout << endl;
    }
    return 0;
}