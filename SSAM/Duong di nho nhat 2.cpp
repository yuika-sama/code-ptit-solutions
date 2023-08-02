#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
using namespace std;
const int X[4] = {-1, 0, 1, 0};
const int Y[4] = {0, 1, 0, -1};
int m, n;
class prio
{
	public:
		bool operator()(pair<int, pair<int, int> > &p1, pair<int, pair<int, int> > &p2){
			return (p1.second.second > p2.second.second);
		}
};
bool safe(int x, int y){
	if (x<0 || x>=m || y<0 || y>=n){
		return 0;
	}
	return 1;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int a[505][505], f[505][505], vs[505][505] = {0};//vs: visited, f: cost
		cin >> m >> n;
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
				f[i][j] = INT_MAX;
			}
		}
		f[0][0] = a[0][0];
		priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, prio> qp;
		qp.push({0, {0, a[0][0]}});
		while (!qp.empty()){
			pair<int, pair<int, int> > tp = qp.top();
			qp.pop();
			int x = tp.first, y = tp.second.first;
			if (vs[x][y]) continue;
			vs[x][y] = 1;
			for (int i=0; i<4; i++){
				if (safe(x+X[i], y+Y[i])){
					if (f[x+X[i]][y+Y[i]] > f[x][y] + a[x+X[i]][y+Y[i]]){
						f[x+X[i]][y+Y[i]] = f[x][y] + a[x+X[i]][y+Y[i]];
						qp.push({x+X[i], {y+Y[i], f[x+X[i]][y+Y[i]]}});
					}
				}
			}
			
		}
		cout << f[m-1][n-1];
		linedown;
	}
}
