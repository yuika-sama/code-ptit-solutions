#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void Try(int n, char source, char mid, char des){
	if (n==1){
		cout << source << " -> " << des << endl;
		return;
	}
	Try(n-1, source, des, mid);
	Try(1, source, mid, des);
	Try(n-1, mid, source, des);
}
main(){
	int n; cin >> n;
	Try(n, 'A', 'B', 'C');
}