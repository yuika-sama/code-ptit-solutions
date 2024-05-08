#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template

int a[20][20];
bool l[20], r[20], ok[20];
int x[100];
int res = 0;
void Try(int i, int sum){
	for (int j=1; j<=8; j++){
		if (!ok[j] and !r[i+j-1] and !l[i-j+8]){
			ok[j] = true;
			r[i+j-1] = true;
			l[i-j+8] = true;
			sum += a[i][j];
			if (i == 8){
				res = max(res, sum);
			} else Try(i+1, sum);
			sum -= a[i][j];
			ok[j] = false;
			r[i+j-1] = false;
			l[i-j+8] = false;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	for (int i=1; i<=8; i++){
		for (int j=1; j<=8; j++){
			cin >> a[i][j];
		}
	}
	memset(ok, 0, sizeof(ok));
	memset(l, 0, sizeof(l));
	memset(r, 0, sizeof(r));
	res = 0;
	for (int i=0; i<=10; i++){
		x[i] = i;
	}		

	Try(1,0);

	cout << res;
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}