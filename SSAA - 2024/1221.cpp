#include <bits/stdc++.h>
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
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

#define pli pair<long long, int>

void solve(int n, int m) {
    vector<pii> adj[n+1];
    while (m--) {
        int x, y, z;
        cin >> x >> y >> z;
        adj[x].pb({y, z});
        adj[y].pb({x, z});
    }

    priority_queue<pli, vector<pli>, greater<pli>> q;
    q.push({0, 1});
    vector<ll> d(n + 1, LLONG_MAX / 4);
    d[1] = 0;
    ll c[n+1] = {};
    c[1] = 1;
    int vs[n + 1] = {};

    while (!q.empty()) {
        pli t = q.top(); q.pop();
        int u = t.sc;
        if (vs[u]) continue; vs[u] = 1;

        for (auto i : adj[u]) {
            if (d[i.fi] > d[u] + i.sc) {
                d[i.fi] = d[u] + i.sc;
                q.push({d[i.fi], i.fi});
                c[i.fi] = c[u];
            } else if (d[i.fi] == d[u] + i.sc) {
                c[i.fi] += c[u];
            }
        }
    }

    cout << d[n] sp c[n];
}

int main() {
    faster();
    int n, m;
    while (cin >> n >> m) {
        solve(n, m);
        cout << endl;
    }
    cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}