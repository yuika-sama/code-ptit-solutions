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
int n;
int a[15][15];
vector<string> r;
void Try(int x, int y, string w){
	if (x==n and y==n){
		r.pb(w);
		return;
	}
	if (x<n and a[x+1][y] == 1){
		Try(x+1, y, w + "D");
	}
	if (y<n and a[x][y+1] == 1){
		Try(x, y+1, w + "R");
	}
}
main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		if (a[1][1] == 0 or a[n][n] == 0){
			cout << -1 << endl;
			continue;
		}
		r.clear();
		Try(1, 1, "");
		if (r.empty()){
			cout << -1 << endl;
			continue;
		}
		sort(r.begin(), r.end());
		for (auto i:r){
			cout << i << ' ';
		}
		cout << endl;
	}
}