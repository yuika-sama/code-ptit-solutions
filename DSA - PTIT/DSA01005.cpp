#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n; cin >> n;
		int x[n+1];
		for (int i=1; i<=n; i++) x[i] = i;
		do{
			for (int i=1; i<=n; i++){
				cout << x[i];
			}
			cout << ' ';
		} while (next_permutation(x+1, x+1+n) == true);
		cout << endl;
	}
}