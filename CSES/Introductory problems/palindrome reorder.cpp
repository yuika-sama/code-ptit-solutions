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
	map<char, int> m;
	for (auto x:s){
		m[x]++;
	}
	bool check = true;
	if (s.size()%2==0){
		for (auto x:m){
			if (x.second%2==1){
				check = false;
				break;
			}
		}
		if (check == false){
			cout << "NO SOLUTION";
			exit(0);
		}
		string first_half  = "", second_half = "";
		for (auto x:m){
			string r(x.second/2, x.first);
			first_half += r;
			second_half = r + second_half;
		}
		cout << first_half + second_half;
	} else {
		int d = 0;
		char middle;
		for (auto x:m){
			if (x.second%2==1){
				d++;
				middle = x.first;
				if (d>1){
					check = false;
					break;
				}
			}
		}
		if (check == false){
			cout << "NO SOLUTION";
			exit(0);
		}
		string first_half  = "", second_half = "";
		for (auto x:m){
			string r(x.second/2, x.first);
			first_half += r;
			second_half = r + second_half;
		}
		cout << first_half + middle + second_half;
	}
}