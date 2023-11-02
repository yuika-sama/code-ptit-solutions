#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
main(){
	int n, m; cin >> n >> m;
	string s; cin >> s;
	int keep = n-m;
	string r  = s;
	sort(r.begin(), r.end());
	int d = 0;
	while (next_permutation(r.begin(), r.end())){
		string sub = "";
		int index = 0;
		for (char c:s){
			if (index<n && r[index] == c){
				sub.push_back(c);
				index++;
			}
		}
		if (sub.size() >= m) d++;
	}
	cout << d;
}
