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
	int t; cin >> t;
	while (t--){
		int n, m, k;
		cin >> n >> m >> k;
		int a[n+1], b[m+1], c[k+1];
		
		for (int i=0; i<n; i++) cin >> a[i];
		for (int i=0; i<m; i++) cin >> b[i];
		for (int i=0; i<k; i++) cin >> c[i];
		sort(a, a+n);
		sort(b, b+m);
		sort(c, c+k);
		
		bool check = false;
		int i = 0, j = 0, q = 0;
		while (i<n and j<m and q<k){
			if (a[i] == b[j] and a[i] == c[q]){
				cout << a[i] << ' ';
				i++, j++, q++;
				check = true;
				continue;
			}
			if (a[i] < b[j]) i++;
			else if (b[j] < c[q]) j++;
			else q++;
		}
		if (!check) cout << "NO";
		cout << endl;
	}
}