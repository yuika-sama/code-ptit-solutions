#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 100
using namespace std;
int main(){
	fstream fi, fo;
	fi.open("KHUDANCU.INP", ios::in);
	fo.open("KHUDANCU.OUT", ios::out);
	faster();
	int m,n,d,k; fi >> m >> n >> d >> k;
//	fi.ignore();
	int sum[m+1][n+1];
	memset(sum, 0, sizeof(sum));
	string s[m+1];
	for (int i=1; i<=m; i++){
		fi >> s[i];
		s[i] = '.' + s[i];
	}
	for (int i=1; i<=m; i++){
		for (int j=1; j<=n; j++){
			sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
			if (s[i][j]== 'M') sum[i][j] += 1; 
		}
	}
	int res = 0;
	for (int i=1; i<=m; i++){
		for (int j=1; j<=n; j++){
			if (s[i][j] == 'P'){
				int xa = min(m, i+d);
				int ya = min(n, j+d);
				int xb = max(1, i-d);
				int yb = max(1, j-d);
				int cnt = sum[xa][ya] - sum[xb-1][ya] - sum[xa][yb-1] + sum[xb-1][yb-1];
				if (cnt >= k){
					res++;
				}
			}
		}
	}
	fo << res;
	return 0;
	fi.close();
	fo.close();
	return 0;
}