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
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	int r[] = {a[0]*a[1], a[0]*a[1]*a[2], a[n-1]*a[n-2], a[n-1]*a[n-2]*a[n-3], a[0]*a[1]*a[n-1]};
	cout << *max_element(r, r+5) << endl;
}