#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int res = 0;
bool l[100]={}, r[100]={}, ok[100]={};
char a[100][100];
void Try(int i){
	for (int j=1; j<=8; j++){
		if (ok[j] == false && l[i-j+8] == false && r[i+j] == false && a[i][j] == '.'){
			ok[j] = true;
			l[i-j+8] = true;
			r[i+j] = true;
			if (i==8) res++; else Try(i+1);
			ok[j] = false;
			l[i-j+8] = false;
			r[i+j] = false;
		}
	}
}
main(){
	for (int i=1; i<=8; i++){
		for (int j=1; j<=8; j++){
			cin >> a[i][j];
		}
	}
	memset(r, false, 100);
	memset(l, false, 100);
	memset(ok, false, 100);
	Try(1);
	cout << res;
}