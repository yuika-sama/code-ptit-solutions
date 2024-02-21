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
	int a[n+5];
	int f[n+5];
	for (int i=1; i<=n; i++){
		cin >> a[i];
		f[i] = 1;
	}
	for (int i=1; i<=n; i++){
		for (int j=1; j<i; j++){
			if (a[i] > a[j]){
				f[i] = max(f[i], f[j]+1);
			}
		}
	}
	cout << *max_element(f+1, f+1+n);
}