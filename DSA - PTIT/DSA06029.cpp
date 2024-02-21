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
	vector<int> a(n);
	for (auto& i:a) cin >> i;
	vector<vector<int>> v;
	for (int i=0; i<n; i++){
		int key = a[i];
		int j = i-1;
		while (j>=0 and a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		vector<int> t;
		for (int j=0; j<=i; j++){
			t.pb(a[j]);
		}
		v.pb(t);
	}
	for (int i=v.size()-1; i>=0; i--){
		cout << "Buoc " << i << ": ";
		for (int j=0; j<v[i].size(); j++){
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}