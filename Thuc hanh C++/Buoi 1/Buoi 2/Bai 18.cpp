#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.se < b.se) return 1;
    else if(a.se > b.se) return 0;
    return a.fi < b.fi;
}

int main()
{
    faster();
    int n, m, x;
    map<int, int> myMap;
    cin >> n >> m;
    while(n--)
    {
        cin >> x;
        ++myMap[x];
    }
    vector<pair<int, int>> v;
    for(auto i : myMap) v.pb(i);
    sort(v.begin(), v.end(), cmp);
    int idx = v.sz - 2, M = v[v.sz - 1].se;
    while(v[idx].se == M) --idx;
    if(idx < 0) return cout << "NONE", 0;
    cout << v[idx].fi;
    return 0;
}
