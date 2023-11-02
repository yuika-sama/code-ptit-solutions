#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 100
using namespace std;
fstream fi, fo;
ll n;
void input(string name){
	fi.open(name, ios::in);
	fi >> n;
	fi.close();
}
int main(){
	faster();
	input("DAYCON.INP");
	fo.open("DAYCON.INP", ios::out);
	ll res  = 0;
	if (n%5==0) res = n/5; else
	if (n%5 < 4) res = n/5+1; else
	res = n/5  + 2;
	fo << res;
	fo.close();
	return 0;
}