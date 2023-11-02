#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n';
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
#define ll long long
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string a,b; cin >> a >> b;
		int f[1005][1005];
		memset(f, 0, sizeof(f));
		int res = 0;
		for (int i=1; i<=a.size(); i++){
			for (int j=1; j<=b.size(); j++){
				if (a[i-1] == b[j-1]) f[i][j] = f[i-1][j-1]+1; else
				f[i][j] = max(f[i-1][j], f[i][j-1]);
				res = max(res, f[i][j]);
			}
		}
		cout << res << endl;
	}
}