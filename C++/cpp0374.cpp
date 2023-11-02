#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	string s; cin >> s;
	int d = 0;
	int first, last;
	int new_first, new_last;
	for (int i=1; i<s.size()-1; i++){
		if (s[i] == 'B' and s[i-1] == 'A'){
			first = i-1;
		} else if (s[i] == 'A' and s[i-1] == 'B'){
			last = i;
		}
		if (new_first != first and new_last != last){
			d++;
			new_first = first;
			new_last = last;
//			i = last;
//deo biet lam

		}
	}
	cout << d;
}