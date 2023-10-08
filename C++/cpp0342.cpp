#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long cv(string s){
    long long n = 0;
    for (int i=0; i<s.size(); i++){
        n = n*10 + s[i]-'0';
    }
    return n;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		int n = 0;
		int a[100] = {0};
		for (int i=0; i<s.size(); i++){
			if (!isdigit(s[i])){
				a[s[i] - 'A']++;
			} else {
				n += s[i] - '0';
			}
		}
		for (int i=0; i<30; i++){
			if (a[i]!=0){
				for (int j=0; j<a[i]; j++){
					cout << char(i+'A');
				}
			}
		}
		cout << n;
		cout << endl;
	}
}
