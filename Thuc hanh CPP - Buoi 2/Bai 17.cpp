#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct idea{
	ll id, share, react;
	long double point;
};
bool cmp(idea a, idea b){
	if (a.point == b.point) return a.id < b.id;
	return a.point > b.point;
}
void solve(){
	int n; cin >> n;
	idea a[n];
	for (int i = 0; i<n; i++){
		cin >> a[i].id >> a[i].share >> a[i].react;
		a[i].point = a[i].share*0.7 + a[i].react*0.3;
	}
	sort(a, a+n, cmp);
	map<ll, idea> m;
	for (int i = 0; i<7; i++){
		cout << a[i].id << ' ';
	}
//	for (auto x:m){
//		cout << x.second.id << ' ';
//	}
}
int main() {
    faster();
    int t=1; 
//	cin >> t;
    while (t--){
    	solve();
//    	cout << endl;
	}
    return 0;
}