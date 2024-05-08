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
struct item{
	int v, w;
	double r;
};
bool cmp(item a, item b){
	return a.r > b.r;
}
void solve(){
	/*hav fun with coding*/
	int n, w;
	cin >> n >> w;
	vector<item> m(n);
	for (int i=0; i<n; i++){
		cin >> m[i].w >> m[i].v;
		m[i].r = (double)m[i].w / m[i].v;
	}
	sort(m.begin(), m.end(), cmp);
	int value = 0;
	double weight = 0;
	int c = 0;
	for (int i=0; i<n; i++){
		if (value <= w-0.5){
			value += m[i].v;
			weight += m[i].w;
			c = i;
		}
	}
	if (value > w) weight -= (double)(value - w) * m[c].r;
	cout << precision(2) << weight;
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