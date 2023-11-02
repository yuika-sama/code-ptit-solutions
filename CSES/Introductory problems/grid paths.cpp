#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string s;
bool a[9][9];
int p[48];
int dX[4] = {-1, 0, 1, 0};
int dY[4] = {0, 1, 0, -1};
int dfs(int index, int x, int y){
	if (a[x][y+1] == true && a[x][y-1] == true && a[x-1][y] == false && a[x+1][y] == false){
		return 0;
	}
	if (a[x][y+1] == false && a[x][y-1] == false && a[x-1][y] == true && a[x+1][y] == true){
		return 0;
	}
	if (x==7 && y==1){
		if (index == 48){
			return 1;
		}
		return 0;
	}
	if (index == 48){
		return 0;
	}
	int res = 0;
	a[x][y] = true;
	if (p[index] < 4){
		int new_x = x + dX[p[index]];
		int new_y = y + dY[p[index]];
		if (a[new_x][new_y] == false)
			res += dfs(index+1, new_x, new_y);
	} else {
		for (int i=0; i<4; i++){
			int new_x = x + dX[i];
			int new_y = y + dY[i];
			if (a[new_x][new_y] == false)
				res += dfs(index+1, new_x, new_y);
		}
	}
	a[x][y] = false;
	return res;
}
main(){
	faster();
	getline(cin, s);
	for (int i=0; i<s.size(); i++){
		if(s[i] == 'U') p[i] = 0; else
		if(s[i] == 'D') p[i] = 2; else
		if(s[i] == 'L') p[i] = 3; else
		if(s[i] == 'R') p[i] = 1; else
		p[i] = 4;
		
	}
	for (int i=0; i<9; i++){
		a[0][i] = true;
		a[8][i] = true;
		a[i][8] = true;
		a[i][0] = true;
	}
	for (int i=1; i<=7; i++){
		for (int j=1; j<=7; j++){
			a[i][j] = false;
		}
	}
	int ans = dfs(0, 1, 1);
	cout << ans;
}