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
main(){
	int n, k; cin >> n >> k;
	int a[MAX], c[MAX], f[MAX][MAX];
	for (int i=1; i<=n; i++){
		cin >> a[i] >> c[i];
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<=k; j++){
			if(j>=a[i]){
				f[i][j] = max(f[i-1][j], f[i-1][j-a[i]] + c[i]);
			} else {
				f[i][j] = f[i-1][j];
			}
		}
	}
	cout << f[n-1][k] << endl;
	while (n!=1){
		if (f[n-1][k] != f[n-2][k]){
			cout << n-1 << ' ';
			k-=a[n-1];
		}
		n--;
	}
}