#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void solve(){
	int n1,n2,n3; cin >> n1 >> n2 >> n3;
	ll a[n1], b[n2], c[n3];
	for (auto &x:a) cin >> x;
	for (auto &x:b) cin >> x;
	for (auto &x:c) cin >> x;
	int i = 0, j = 0, k = 0;
	bool check = false;
	while (i<n1 and j<n2 and k<n3){
		if (a[i] == b[j] and b[j] == c[k]){
			cout << a[i] << ' ';
			check = true;
			i++, j++, k++;
		} else if (a[i] < b[j]) i++;
		else if (b[j] < c[k]) j++;
		else k++;
	}
	if (check == false) cout << -1;
}
int main() {
    faster();
    int t; cin >> t;
    while (t--){
    	solve();
    	cout << endl;
	}
    return 0;
}