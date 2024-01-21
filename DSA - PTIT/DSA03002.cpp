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
int solve1(int a, int b){
	string a1 = to_string(a), b1 = to_string(b);
	for (auto& i:a1){
		if (i == '6'){
			i = '5';
		}
	}
	for (auto& i:b1){
		if (i=='6'){
			i = '5';
		}
	}
	return stoi(a1) + stoi(b1);
}
int solve2(int a, int b){
	string a1 = to_string(a), b1 = to_string(b);
	for (auto& i:a1){
		if (i == '5'){
			i = '6';
		}
	}
	for (auto& i:b1){
		if (i=='5'){
			i = '6';
		}
	}
	return stoi(a1) + stoi(b1);
}
main(){
	int a, b;
	cin >> a >> b;
	cout << solve1(a, b) << ' ' << solve2(a, b);
}