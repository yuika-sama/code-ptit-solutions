#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int n, k;
int x[30];
bool ok[30] = {0};
void Try(int i){
	for (int j = x[i-1]+1; j<=n-k+i; j++){
		if (ok[j] == false){
			ok[j] =  true;
			x[i] = j;
			if (i==k){
				for (int r=1; r<=k; r++){
					cout << x[r];
				}
				cout << ' ';
			} else Try(i+1);
			ok[j] = false;
		}
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		for (int i=1; i<=k; i++) x[i] = i;
		memset(ok, false, sizeof(ok));
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}