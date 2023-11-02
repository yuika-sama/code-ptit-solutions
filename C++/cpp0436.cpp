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
	int n; cin >> n;
	int a[n+5];
	int b[n+5];
	for (int i=0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}   
	sort(b, b+n);            
	for (int i=0; i<n; i++){
		int index = upper_bound(b, b+n, a[i]) - b;
		if (index != n){
			cout << b[index] << ' ';
		} else cout << "_ ";
	}
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