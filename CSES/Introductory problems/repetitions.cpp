#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	string s; cin >> s;
	int i=0, res = -1;
	while (i<s.size()){
		int temp = 0;
		int j = i;
		while (s[i] == s[j]){
			temp++;
			j++;
		}
		res = max(res, temp);
		i = max(i+1, j);
	}
	cout << res;
}