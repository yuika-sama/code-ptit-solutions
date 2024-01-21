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
int n;
int x[20] = {0};
vector<string> v;
bool check1(){
	for (int i=1; i<n; i++){
		if (x[i]==1 and x[i+1]==1) return false;
	}
	return true;
}
bool check2(){
	for (int i=1; i<n-3; i++){
		if (x[i]==0 and x[i+1]==0 and x[i+2]==0 and x[i+3] == 0){
			return false;
		}
	}
	return true;
}
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n){
			string tmp;
			for (int i=1; i<=n; i++){
				if (x[i] == 1) tmp.pb('8'); else tmp.pb('6');
			}
			if (tmp[0] == '8' and tmp[tmp.size()-1] == '6' and tmp.find("88") == -1 and tmp.find("6666") == -1) v.pb(tmp);
		} else Try(i+1);
	}
}
main(){
	cin >> n;
	Try(1);
	sort(v.begin(), v.end());
	for (auto x:v){
		cout << x << endl;
	}
}