#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
vector<int> one, two, three, four, five, six, seven, eight, nine, zero;
//ac 50%, 1e6
void resz(){
	one.resize(1e7, 0);
	two.resize(1e7, 0);
	three.resize(1e7, 0);
	four.resize(1e7, 0);
	five.resize(1e7, 0);
	six.resize(1e7, 0);
	seven.resize(1e7, 0);
	eight.resize(1e7, 0);
	nine.resize(1e7, 0);
	zero.resize(1e7, 0);
}
void preprocess(){
	resz();
	for (int i=1; i<=1e7; i++){
		string s = to_string(i);
		zero[i] = zero[i-1];
		one[i]= one[i-1];
		two[i]= two[i-1];
		three[i]= three[i-1];
		four[i]= four[i-1];
		five[i]= five[i-1];
		six[i]= six[i-1];
		seven[i]= seven[i-1];
		eight[i]= eight[i-1];
		nine[i]= nine[i-1];
		for (int j=0; j<s.size(); j++){
			if (s[j] == '0') zero[i]++;
			if (s[j] == '1') one[i]++;
			if (s[j] == '2') two[i]++;
			if (s[j] == '3') three[i]++;
			if (s[j] == '4') four[i]++;
			if (s[j] == '5') five[i]++;
			if (s[j] == '6') six[i]++;
			if (s[j] == '7') seven[i]++;
			if (s[j] == '8') eight[i]++;
			if (s[j] == '9') nine[i]++;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	int l, r; cin >> l >> r;
	cout << zero[r] - zero[l-1]  << ' ';
	cout << one[r] - one[l-1] << ' ';
	cout << two[r] - two[l-1] << ' ';
	cout << three[r] - three[l-1] << ' ';
	cout << four[r] - four[l-1] << ' ';
	cout << five[r] - five[l-1] << ' ';
	cout << six[r] - six[l-1] << ' ';
	cout << seven[r] - seven[l-1] << ' ';
	cout << eight[r] - eight[l-1] << ' ';
	cout << nine[r] - nine[l-1] << ' ';
}
main(){
	faster();
	preprocess();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}