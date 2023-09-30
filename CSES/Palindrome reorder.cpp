#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	string s;
	cin >> s;
	unordered_map<char, int> m;
	for (auto x:s){
		m[x]++;
	}
	int odd_cnt = 0;
	char odd_chr;
	// y tuong:
	//1: xac dinh xem len&1, neu chan -> khong co char le, neu le thi co duy nhat 1 char le
	//2: neu da xac dinh thoa man, chi viec copy nua dau sang nua sau va fill char thua ra neu co
	for (auto x:m){
		if (x.second % 2 != 0){
			odd_cnt++;
			odd_chr = x.first;
		}
	}
	if (odd_cnt > 1 || odd_cnt == 1 && s.size()%2==0){
		cout << "NO SOLUTION";
		exit(0);
	}
	string first_half = "", second_half = "";
	for (auto x:m){
		string r(x.second/2, x.first);
		first_half += r;
		second_half = r + second_half;
	}
	if (odd_cnt == 1){
		cout << first_half + odd_chr + second_half;
	} else cout << first_half + second_half;
}