#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool namnhuan(int y){
	if (y!=0 and y%4==0 and y%100!=0){
		return true;
	}
	if (y!=0 and y%400==0){
		return true;
	}
	return false;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int y, d;
		cin >> y >> d;
		if (namnhuan(y)){
			if (s=="Bac"){
				if (d>31 and d<=121) cout << "Xuan"; else
				if (d>121 and d<=213) cout << "He"; else
				if (d>213 and d<=305) cout << "Thu"; else
				cout << "Dong";
			} else if (s=="Nam"){
				if (d>121 and d<=304) cout << "Mua"; else
				cout << "Kho";
			}
		} else {
			if (s=="Bac"){
				if (d>31 and d<=120) cout << "Xuan"; else
				if (d>120 and d<=212) cout << "He"; else
				if (d>212 and d<=304) cout << "Thu"; else
				cout << "Dong";
			} else if (s=="Nam"){
				if (d>90 and d<=303) cout << "Mua"; else
				cout << "Kho";
			}
		}
		cout << endl;
	}
}