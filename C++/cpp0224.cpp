#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const int X[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int Y[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int n, m, a[105][105];
void BFS(int x, int y){
	for (int i=0; i<8; i++){
		int new_x = x+X[i];
		int new_y = y+Y[i];
		if (new_x>=0 && new_y>=0 && new_y<m && new_x<n && a[new_x][new_y] == 1){
			a[new_x][new_y] = 0;
			BFS(new_x, new_y);
		}
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int res = 0;
		//neu thay a[i][j] == 1 thi se them 1 mien ma tran, va dua cac phan tu 1 xung quanh ve 0;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (a[i][j] == 1){
					res++;
					BFS(i, j);
				}
			}
		}
		cout << res << endl;
	}
}