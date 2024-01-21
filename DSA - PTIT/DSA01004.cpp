#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int n, k;
int x[20];
bool ok[20];
void Try(int i){
	for (int j=x[i-1]+1; j<=n-k+i; j++){
		if (ok[j] == false){
			ok[j] = true;
			x[i] = j;
			if (i == k){
				for (int i=1; i<=k; i++) cout << x[i];
				cout << ' ';
			} else Try(i+1);
			ok[j] = false;
		}
	}
}
main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i=1; i<=k; i++) x[i] = i;
		memset(ok, false, sizeof(ok));
		Try(1);
		cout << endl;
	}
}