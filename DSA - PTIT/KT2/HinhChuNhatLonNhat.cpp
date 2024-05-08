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
int n, m;
int a[1005], h[1005], L[1005], R[1005], r;
stack<int> st;
pii res;
void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	st = stack<int> {};
	memset(h, 0, sizeof(h));
	memset(L, 0, sizeof(L));
	memset(R, 0, sizeof(R));
	r = 0;
	res = {0, 0};

	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> a[j];
		}
		for (int j=1; j<=m; j++){
			h[j] = a[j] == 1 ? h[j] + 1 : 0;
		}

		st = stack<int> {};
		for (int j=1; j<=m; j++){
			while (!st.empty() and h[j] <= h[st.top()]) st.pop();
			L[j] = st.empty() ? 1 : st.top() + 1;
			st.push(j);
		}

		st = stack<int> {};
		for (int j=m; j>=1; j--){
			while (!st.empty() and h[j] <= h[st.top()]) st.pop();
			R[j] = st.empty() ? m : st.top() -1;
			st.push(j);
		}

		for (int j=1; j<=m; j++){
			int tmp = h[j] * (R[j] - L[j] + 1);
			if (r <= tmp){
				if (r<tmp){
					r = tmp;
					res = {h[j], R[j] - L[j] + 1};
				} else{
					int x1 = min(res.fi, res.sc), y1 = max(res.fi, res.sc);
					int x2 = min(h[j], R[j] - L[j] + 1), y2 = max(h[j], R[j] - L[j] + 1);
					if (y2-x2 > x1-y1){
						res = {x2, y2};
					} else {
						res = {x1, y1};
					}
				}
			}
		}
	}
	cout << min(res.fi, res.sc) << ' ' << max(res.fi, res.sc);
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}