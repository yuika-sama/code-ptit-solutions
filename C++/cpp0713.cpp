#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int n;
int x[30];
bool ok[30] = {0};
void Try(int i){
	for (int j=1; j<=n; j++){
		if (ok[j] == false){
			ok[j] =  true;
			x[i] = j;
			if (i==n){
				for (int r=1; r<=n; r++){
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
		for (int i=1; i<=n; i++) x[i] = i;
		memset(ok, false, sizeof(ok));
		cin >> n;
		Try(1);
		cout << endl;
	}
}