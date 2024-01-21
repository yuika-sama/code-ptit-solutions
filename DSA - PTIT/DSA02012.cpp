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
int m, n;
int a[105][105];
int d;
void Try(int x, int y){
	if (x == m and y == n){
		d++;
		return;
	}
//	vs[x][y] = true;
	if (x <= m-1){
		Try(x+1, y);
	}
	if (y <= n-1){
		Try(x, y+1);
	}
//	vs[x][y] = false;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> m >> n;
		for (int i=1; i<=m; i++){
			for (int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		d = 0;
		Try(1, 1);
		cout << d << endl;
	}
}