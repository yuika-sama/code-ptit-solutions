#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	int a;
	vector<int> p(2e5+5, 0);
	for (int i=0; i<n; i++){
		cin >> a;
		p[a] = i;
	}
	int res = 1;
	for (int i=2 ;i<=n; i++){
		if (p[i-1] > p[i]){
			res++;
		}
	}
	cout << res;
}