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
vector<int> a,b,c;
int n, k;
int res = 0;
bool sorted(){
	for(int i=1; i<=k; i++){
		if (c[i] < c[i-1]){
			return false;
		}
	}
	return true;
}
void cal(){
	if (sorted()){
		res++;
	}
}
void Try(int i){
	for (int j = b[i-1]+1; j<=n-k+i; j++){
		b[i] = j;
		c[i] = a[b[i]];
		if (i == k){
			cal();
		} else Try(i+1);
	}
}
void solve(){
	/*hav fun with coding*/
	a.resize(n+1);
	b.resize(k+1, 0);
	c.resize(k+1, 0);
	cin >> n >> k;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=k; i++) b[i] = i;
	Try(1);
	cout << res;
}
main(){
	faster();
	solve();
	return 0;
}