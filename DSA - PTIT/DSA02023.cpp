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
set<string> s;
vector<string> vs;
vector<string> res;
int n, k;
int x[40];
bool ok[40];
void Try(int i){
	for (int j=x[i-1]+1; j<=n-k+i; j++){
		if (!ok[j]){
			ok[j] = true;
			x[i] = j;
			if (i==k){
				vector<string> t1;
				for (int i=1; i<=k; i++){
					t1.pb(vs[x[i]]);
				}
				sort(t1.begin(), t1.end());
				string t2;
				for (int i=0; i<t1.size(); i++){
					t2+=t1[i] + " ";
				}
				res.pb(t2);
			} else Try(i+1);
			ok[j] = false;
		}
	}
}
main(){
	cin >> n >> k;
	for (int i=0; i<n; i++){
		string t; cin >> t;
		s.insert(t);
	}
	vs.pb("");
	for (int i=1; i<=k; i++) x[i] = i;
	for (string i:s){
		vs.pb(i);
	}
	n = s.size();
	Try(1);
	sort(res.begin(), res.end());
	for (string i:res){
		cout << i << endl;
	}
}