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
//ac

//end of template
int n, k;
int x[15];
bool check = false;
bool increasing(){
	for (int i=2; i<=k; ++i){
		if (x[i] < x[i-1]){
			return false;
		}
	}
	return true;
}
void display(){
	if (increasing()){
		for (int i=1; i<=k; ++i){
			cout << x[i] << ' ';
		}
		cout << endl;
	}
}
void next_gen(){
	int i = k;
	while (x[i] == n and i > 0){
		i--;
	}
	if (i == 0) check = true; else
	{
		x[i]++;
		for (int j = i+1; j<=k; ++j){
			x[j] = x[j-1];
		}
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	for (int i=1; i<=k; ++i) x[i] = 1;
		while (!check){
			display();
			next_gen();
		}
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}