#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define pr pair<int, int>
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		map<int, int> m;
		set<int> s;
		int x;
		for (int i=0; i<n; i++){
			cin >> x;
			m[x]++;
		}
		for (auto x:m){
			s.insert(x.second);
		}
		for (auto it = s.rbegin(); it!=s.rend(); it++){
			for (auto x:m){
				if (x.second == *it){
					while (x.second!=0){
						cout << x.first << ' ';
						x.second--;
					}
				}
			}
		}
		cout << endl;
	}
}