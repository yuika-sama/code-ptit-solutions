#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; long long a;
		cin >> n >> a;
		int d[10] = {0};
		string s = to_string(a);
		for (int i=0; i<s.size(); i++){ //giai thua tung chu so
			if (s[i] == '2') d[2]++;
			if (s[i] == '3') d[3]++;
			if (s[i] == '4') d[2]+=2, d[3]++;
			if (s[i] == '5') d[5]++;
			if (s[i] == '6') d[5]++, d[3]++;
			if (s[i] == '7') d[7]++;
			if (s[i] == '8') d[7]++, d[2]+=3;
			if (s[i] == '9') d[7]++, d[3]+=2, d[2]++;
			//1! = 0! = 1
			//2! = 2!
			//3! = 3!
			//4! = 3! * 2! * 2!
			//5! = 5!
			//6! = 5! * 3!
			//7! = 7!	
			//8! = 7! * 2! * 2! * 2!
			//9! = 7! * 3! * 3! * 2!
		}
		for (int i=9; i>=2; i--){ //tim so lon nhat
			for (int j=1; j<=d[i]; j++){
				cout << i;
			}
		}
		cout << endl;
		//seem like converting number with a given rule
	}
}