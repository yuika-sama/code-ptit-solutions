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
int n, k;
int x[20];
bool ok[20];
string tmp;
vector<string> v(20);
void Try(int i){
	for (int j = x[i-1]+1; j<=n-k+i; j++){
		if (!ok[j]){
			ok[j] = true;
			x[i] = j;
			if (i == k){
				tmp = "";
				for (int i=1; i<=k; i++){
					tmp.pb(x[i] + '0');
				}
				v.pb(tmp);
			} else Try(i+1);
			ok[j] = false;
		}
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
		int xx;
		string s;
		tmp = "";
		memset(ok, false, sizeof(ok));
		memset(x, 0, sizeof(x));
		v.clear();
		
		for (int i=0; i<k; i++){
			cin >> xx;
			s.pb(xx + '0');
		}
		for (int i=1; i<=k; i++){
			x[i] = i;
			tmp.pb(i + '0');
		}
		v.pb(tmp);
		
		Try(1);
		int d = 0;
		for (string it:v){
			if (it!=s){
				d++;
			} else break;
		}
		
		cout << d << endl;
	}
}