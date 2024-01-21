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
int a[25];
bool x[25];
vector<vector<int>> res;
bool check1(){
	int d = 0;
	for (int i=1; i<=n; i++){
		if (x[i] == 1){
			d++;
		}
		if (d==2) return true;
	}
	return false;
}
bool check2(vector<int> t){
	if (is_sorted(t.begin(), t.end())) return true;
	return false;
}
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i == n){
			if (check1()){
				vector<int> tmp;
				for (int i=1; i<=n; i++){
					if (x[i] == 1) tmp.pb(a[i]);
				}
				if (check2(tmp)) res.pb(tmp);
			}
		} else Try(i+1);
	}
}
bool cmp(vector<int> a, vector<int> b){
	string x = "", y = "";
	for (int i:a) x+=to_string(i) + " ";
	x.pop_back();
	for (int i:b) y+=to_string(i) + " ";
	y.pop_back();
	return x<y;
}
main(){
	cin >> n; 
	for (int i=1; i<=n; i++) cin >> a[i];
	Try(1);
	sort(res.begin(), res.end(), cmp);
	for (auto i:res){
		for (auto j:i){
			cout << j << ' ';
		}
		cout << endl;
	}
}