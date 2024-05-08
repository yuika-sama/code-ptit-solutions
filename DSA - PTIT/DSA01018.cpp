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
bool check(int a[], int k){
	for (int i=1; i<=k; i++){
		if (a[i] != i){
			return false;
		}
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	int n, k;
	cin >> n >> k;
	int a[k+5];
	for (int i=1; i<=k; i++) cin >> a[i];
	if (check(a, k)){
		for (int i=k; i<=n; i++){
			cout << i << ' ';
		}
	} else {
		int i = k;
		while (i>=1 and a[i] == a[i-1] + 1) i--;
		if (i!=0) a[i]--;
		for (int j = i+1; j<=k; j++){
			a[j] = n-k+j;
		}
		for (int i=1; i<=k; i++) cout << a[i] << ' ';
	}
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