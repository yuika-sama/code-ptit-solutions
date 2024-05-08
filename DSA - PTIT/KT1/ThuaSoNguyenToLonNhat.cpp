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
vector<int> f(1e5, 0);
void preprocess(){
	vector<bool> v(100005, true);
	v[0] = v[1] = false;
	for (int i=2; i*i<=1e5; i++){
		if (v[i]){
			for (int j=i*i; j<=1e5; j+=i){
				v[j] = false;
			}
		}
	}
	for (int i=2; i<=1e5; i++){
		if (v[i] == true){
			f[i] = i;
			continue;
		}
		else
		{
			for (int j = sqrt(i); j>=2; j--){
				if (i%j==0 and v[i/j] == true){
					f[i] = i/j;
					break;
				} else if (i%j==0 and v[j] == true){
					f[i] = j;
					break;
				}
			}
		}
	}
}
void solve(){
	/*hav fun with coding*/
	int l, r;
	cin >> l >> r;
	int s = 0;
	for (int i=l; i<=r; i++){
		s+=f[i];
		// cout << f[i] << ' ';
	}
	cout << s;
}
main(){
	faster();
	preprocess();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}