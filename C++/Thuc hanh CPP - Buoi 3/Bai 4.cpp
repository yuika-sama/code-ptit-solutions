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
	faster();
	int t; cin >> t;
	vector<bool> f(1e6+5, true);
	f[0] = false;
	f[1] = false;
	for (int i=2; i*i<=1e6; i++){
		if (f[i] == true){
			for (int j=i*2; j<=1e6; j+=i){
				f[j] = false;
			}
		}
	}
	vector<int> p;
	for (int i=2; i<=1e6; i++){
		if (f[i]){
			p.pb(i);
		}
	}
	for (int k = 1; k<=t; k++){
		int n;
		cin >> n;
		vector<int> a;
		for (int i=0; i<n*n; i++){
			a.pb(p[i]);
		}
		int c1 = 0, c2 = n-1, h1=0, h2 = n-1;
		int x = 0;
		int c[25][25];
		cout << "Test " << k << ":\n";
		while (c2>=c1 && h2>=h1){
			for (int i=c1; i<=c2; i++) c[h1][i] =  a[x++];
			h1++;
			for (int i=h1; i<=h2; i++) c[i][c2] = a[x++];
			c2--;
			if (h1<=h2){
				for (int i=c2; i>=c1; i--) c[h2][i] = a[x++];
				h2--;
			}
			if (c1<=c2){
				for (int i=h2; i>=h1; i--) c[i][c1] = a[x++];
				c1++;
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cout << c[i][j] << ' ';
			}
			cout << endl;
		}
	}
} 