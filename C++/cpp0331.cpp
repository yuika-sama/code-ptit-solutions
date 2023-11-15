#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string add(string a, string b){ //bignum add
	if (a.size() < b.size()) swap(a,b);
	int n = a.size(), m = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(n-m, '0');
	string res = "";
	int rem = 0;
	for (int i=0; i<n; i++){
		int digit = (a[i] - '0') + (b[i] - '0') + rem;
		res += (char)(digit%10 + '0');
		rem = digit/=10;
	}
	if (rem > 0){
		res += (char)(rem + '0');
	}
	reverse(res.begin(), res.end());
	return res;
}
bool check(string s, int l, int len1, int len2){
	string first_half = s.substr(l, len1);
	string second_half = s.substr(l+len1, len2);
	string sum = add(first_half, second_half);
	if (sum.size() > s.size() - len1 - len2 - l){
		return false;
	}
	if (sum == s.substr(len1+len2+l, sum.size())){
		if (s.size() == l+len1+len2+sum.size()){
			return true;
		}
		return check(s, l+len1, len2, sum.size());
	}
	return false;
}
void solve(){
	string s; cin >> s;
	for (int i=1; i<s.size(); i++){
		for (int j=1; j<=s.size()-i; j++){
			if (check(s, 0, i, j)){
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
}
int main() {
    faster();
    int t; cin >> t;
    while (t--){
    	solve();
    	cout << endl;
	}
    return 0;
}