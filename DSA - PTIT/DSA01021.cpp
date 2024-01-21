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
		int n, k;
		cin >> n >> k;
		vector<int> a(k+1);
		map<int, int> m;
		for (int i=1; i<=k; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		int i = k;
		while (i>0 and a[i] == n-k+i) i--;
		if (i==0){
			cout << k << endl;
			continue;
		}
		a[i]++;
		while (i<k){
			a[i+1] = a[i]+1;
			i++;
		}
		int r = 0;
		for (int i=1; i<=k; i++){
			if (m[a[i]] == 0){
				r++;
			}
		}
		cout << r << endl;
	}
}