#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
char a[25][25];-
int n, m;
void Fill(int x, int y, char cur, char New){
	if (x<0 or y<0 or x>=n or y>=m) return;
	if (a[x][y] != cur) return;
	a[x][y] = New;
	Fill(x+1, y, cur, New);
	Fill(x, y+1, cur, New);
	Fill(x, y-1, cur, New);
	Fill(x-1, y, cur, New);
}
void solve(){
	cin >> n >> m;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> a[i][j];
			if (a[i][j] == 'O'){
				a[i][j] = '_';
			}
		}
	}
	for (int i=0; i<n; i++){
		if (a[i][0] == '_'){
			Fill(i, 0, '_', 'O');
		}
	}
	for (int i=0; i<m; i++){
		if (a[0][i] == '_'){
			Fill(0, i, '_', 'O');
		}
	}
	for (int i = 0; i<n; i++){
		if (a[i][m-1] == '_'){
			Fill(i, m-1, '_', 'O');
		}
	}
	for (int i=0; i<m; i++){
		if (a[n-1][i] == '_'){
			Fill(n-1, i, '_', 'O');
		}
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			if (a[i][j] == '_'){
				a[i][j] = 'X';
			}
		}
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
int main() {
    faster();
    int t; cin >> t;	
    while (t--){
    	solve();
//    	cout << endl;
	}
    return 0;
}