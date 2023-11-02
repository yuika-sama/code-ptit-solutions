#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	if (n==1) cout << 1; else
	if (n<=3) cout << "NO SOLUTION"; else{
		for (int i=2; i<=n; i+=2) cout << i << ' ';
		for (int i=1; i<=n; i+=2) cout << i << ' ';
	}	
}