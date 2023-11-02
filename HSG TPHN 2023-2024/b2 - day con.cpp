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
int main(){
	faster();
	fstream fi, fo;
	fi.open("DAYCON.INP", ios::in);
	fo.open("DAYCON.OUT", ios::out);
	int n; fi >> n;
	int a[n+5];
	vector<bool> f(1e6+2, 1);
	f[0] = f[1] = false;
	for (int i=2; i*i<=1e6; i++){
		if (f[i] == true){
			for (int j = i*2 ;j<=1e6; j+=i){
				f[j] = false;
			}
		}
	}
	vector<int> v;
	int check = 0;
	for (int i=0; i<n; i++){
		fi >> a[i];
		if (f[a[i]]){
			v.pb(i+1);
			check++;
		}
	}
	int res = INT_MAX;
	for (int i = 1; i<v.size(); i++){
		res = min(res, v[i] - v[i-1]+1);
	}
	if (check >= 2) fo << res; else fo << -1;
	return 0;
	fi.close();
	fo.close();
	return 0;
}