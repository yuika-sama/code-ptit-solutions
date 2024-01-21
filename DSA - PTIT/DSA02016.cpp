#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool ok[50], l[50], r[50];
int x[50];
int n, d;
void Try(int i){
	for (int j=1; j<=n; j++){
		if (ok[j] == false and l[i-j+n]==false and r[i+j-1]==false){
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
		}
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n;
		d = 0;
		memset(ok, false, sizeof(ok));
		memset(l, false, sizeof(ok));
		memset(r, false, sizeof(ok));
		for (int i=1; i<=n; i++)x[i] = i;
		Try(1);
		cout << d << endl;
	}
}