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
int n;
bool ok[100], l[200], r[200];
int x[100];
int d = 0;
void Try(int i){
	for (int j=1; j<=n; j++){
		if (!ok[j] && !l[i-j+n] && !r[i+j-1]){
			ok[j] = true;
			l[i-j+n] = true;
			r[i+j-1] = true;
			x[i] = j;
			if (i==n){
				d++;
			} else Try(i+1);
			ok[j] = false;
			l[i-j+n] = false;
			r[i+j-1] = false;
//			x[i] = j;
		}
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n;
		memset(ok, false, sizeof(ok));
		memset(l, false, sizeof(l));
		memset(r, false, sizeof(r));
		for (int i=1; i<=n; i++) x[i] = i;
		d = 0;
		Try(1);
		cout << d << endl;
	}
}