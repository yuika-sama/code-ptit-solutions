#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		char a[100][100];
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int max = 0;
		int hor[100][100], ver[100][100];
		hor[0][0] = ver[0][0] = (a[0][0] == 'X');
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				if (a[i][j] == 'O'){
					ver[i][j] = hor[i][j] = 0;
				} else {
					hor[i][j] = (j==0)?1:hor[i][j-1]+1;
					ver[i][j] = (i==0)?1:ver[i-1][j]+1;
				}
			}
		}
		int res = 0;
		for (int i = n-1; i>=0; i--){
			for (int j=n-1; j>=0; j--){
				int smol = min(hor[i][j], ver[i][j]);
				while (smol > res){
					if (ver[i][j-smol+1] >= smol and hor[i-smol+1][j] >= smol){
						res = smol;
					}
					smol--;
				}
			}
		}
		cout << res << endl;
	}
}