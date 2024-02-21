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
ll merge(ll a[], int l, int m, int r){
	int i j, k, n1 = m-l+1, n2 = r-m;
	ll L[n1], R[n2];
	for (int i=0; i<n1; i++) L[i] = a[l+i];
	for (int i=0; i<n2; i++) R[i] = a[m+i+1];
	ll c = 0;
	i = j = 0, k = 1;
	while (i<n1 and j<n2){
		if (L[i] <= R[j]) a[k++] = L[i++];
		else {
			c = c + n1 - i;
			a[k++] = R[j++];
		}
	}
	while (i < n1) a[k++] = L[i++];
	while (j < n2) a[k++] = R[j++];
	return c;
}

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	ll a[n+5];
	for (int i=0; i<n; i++) cin >> a[i];
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