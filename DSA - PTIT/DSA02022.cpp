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
int x[9];
vector<string> res;
bool check1(){
	for (int i=1; i<=4; i++){
		if (x[i] != x[8-i+1]){
			return true;
		}
	}
	return true;
}
bool check2(){
	if (x[1] == 0 and x[2] == 0) return false;
	if (x[3] == 0 and x[4] == 0) return false;
	if (x[3] == 1) return false;
	return true;
}
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==8){
			if (x[5] == 1){
				if (check1() and check2()){
					string t = "";
					for (int i=1; i<=8; i++){
						if (x[i] == 1) t+='2'; else t+='0';
						if (i==2 or i==4) t+='/';
					}
					res.pb(t);
				}
			}
		} else Try(i+1);
	}
}
main(){
	memset(x, 0, sizeof(x));
	Try(1);
	sort(res.begin(), res.end());
	for (auto i:res) cout << i << endl;
}