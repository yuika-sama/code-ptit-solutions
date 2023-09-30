#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
long long to5(long long n){
	string tmp = to_string(n);
	for (int i=0; i<tmp.size(); i++){
		if (tmp[i] == '6') tmp[i] = '5';
	}
	return stoll(tmp);
}
long long to6(long long n){
	string tmp = to_string(n);
	for (int i=0; i<tmp.size(); i++){
		if (tmp[i] == '5') tmp[i] = '6';
	}
	return stoll(tmp);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long a, b; cin >> a >> b;
		cout << to5(a) + to5(b) << ' ' << to6(a) + to6(b) << endl;
	}
}