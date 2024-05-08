#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string olympic(int d, int m){
	string res = "";
	if (m == 1){
		if (d>=20 && d<=31) res = "Bao Binh"; else res = "Ma Ket";
	} else
	if (m == 2){
		if (d>=19 && d<=29) res = "Song Ngu"; else res = "Bao Binh";
	} else
	if (m == 3){
		if (d>=21 && d<=31) res = "Bach Duong"; else res = "Song Ngu";
	} else
	if (m == 4){
		if (d>=20 && d<=30) res = "Kim Nguu"; else res = "Bach Duong";
	} else
	if (m == 5){
		if (d>=21 && d<=31) res = "Song Tu"; else res = "Kim Nguu";
	} else
	if (m == 6){
		if (d>=21 && d<=30) res = "Cu Giai"; else res = "Song Tu";
	} else
	if (m == 7){
		if (d>=23 && d<=31) res = "Su Tu"; else res = "Cu Giai";
	}else
	if (m == 8){
		if (d>=23 && d<=31) res = "Xu Nu"; else res = "Su Tu";
	} else
	if (m == 9){
		if (d>=23 && d<=30) res = "Thien Binh"; else res = "Xu Nu";
	} else
	if (m == 10){
		if (d>=23 && d<=31) res = "Thien Yet"; else res = "Thien Binh";
	} else
	if (m == 11){
		if (d>=23 && d<=30) res = "Nhan Ma"; else res = "Thien Yet";
	} else
		{
		if (d>=22 && d<=31) res = "Ma Ket"; else res = "Nhan Ma";
	}
	return res;
}
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int d, m; cin >> d >> m;
		cout << olympic(d, m) << endl;		
	}
}