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
	int n; cin >> n;
	int f[100000] = {0};
	for (int i=0; i<n; i++){
		int x;
		cin >> x;
		f[x] = f[x-1] + 1;
	}
	cout << n - *max_element(f+1, f+n+1);
}