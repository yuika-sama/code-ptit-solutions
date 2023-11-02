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
char convert(char s){
	if (s>='a' and s<='z'){
		if (s=='y') return 'a';
		if (s=='z') return 'b';
		return s+2;
	} else if (s>='A' and s<='Z'){
		if (s == 'A') return 'Y';
		if (s == 'Z') return 'B';
		return s-2;
	}
}
main(){
	string s; 
	getline(cin , s);
	for (int i = 0; i<s.size(); i++){
		if (isal(s[i])){
			if (s[i]>='a' and s[i]<='z'){
				if (s[i]=='y') s[i] = 'a'; else
				if (s[i]=='z') s[i] = 'b'; else
				s[i]+=2;
			} else if (s[i] >= 'A' and s[i] <= 'Z'){
//				cout << s[i] << endl;		
				if (s[i]=='A') s[i] = 'Y'; else
				if (s[i]=='B') s[i] = 'Z'; else
				s[i]-=2;
			}
		}
	}
	cout << s;
}