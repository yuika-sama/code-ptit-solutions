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
bool is(char c){
	return (c!='A' and c!='E');
}
main(){
	char c;
	cin >> c;
	string s;
	for (char i='A'; i<=c; i++){
		s+=i;
	}
	do {
		bool x = true;
		for (int i=0; i<s.size(); i++){
			if (s[i] == 'A' or s[i] == 'E'){
				if (i > 0 and i < s.size()-1 and is(s[i-1]) and is(s[i+1])){
					x = false;
					break;
				}
			}
		}
		if (x) cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));
}