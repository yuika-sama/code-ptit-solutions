#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool isal(char s){
	if (s>='a' and s<='z') return true;
	if (s>='A' and s<='Z') return true;
	return false;
}
main(){
	string s; 
	getline(cin , s);
	for (int i = 0; i<s.size(); i++){
		if (isal(s[i])){
			if (s[i]>='a' and s[i]<='z'){
				if (s[i]=='a') s[i] = 'y'; else
				if (s[i]=='b') s[i] = 'z'; else
				s[i]-=2;
			} else if (s[i] >= 'A' and s[i] <= 'Z'){	
				if (s[i]=='Y') s[i] = 'A'; else
				if (s[i]=='Z') s[i] = 'B'; else
				s[i]+=2;
			}
		}
	}
	cout << s;
}