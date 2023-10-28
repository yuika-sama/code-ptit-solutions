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
	int n; cin >> n;
	if (n==1) cout << 45; else
	if (n==2) cout << 495; else{
		cout << precision(0) << 99.0/2.0*pow(10, n-1)*pow(10, (n-1)/2);
	} 
}