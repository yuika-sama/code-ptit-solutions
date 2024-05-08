#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n';
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
struct Freq{
	char kt;
	int fr;
};
int search(Freq f[], int n, char c){
	for (int i=0; i<=n; i++){
		if (f[i].kt == c){
			return i;
		}
	}
	return n+1;
}
int Split(string s, Freq f[], int n){
	int k = s.size();
	for (int i=0; i<k; i++){
		int p = search(f, n, s[i]);
		if (p<=n) f[p].fr++; else{
			n = p;
			f[p].kt = s[i];
			f[p].fr = 1;
		}
	}
	return n;
}
void Sort(Freq f[], int n){
	Freq t;
	for (int i=0; i<n; i++){
		for (int j=i+1; j<=n; j++){
			if (f[i].fr < f[j].fr){
				t = f[i];
				f[i] = f[j];
				f[j] = t;
			}
		}
	}
}
main(){
	string s; cin >> s;
	int d; cin >> d;
	int m = -1, n = s.size(), ok[100];
	memset(ok, true, sizeof(ok));
	Freq f[100];
	m = Split(s, f, m);
	string res = s;
	Sort(f, m);
	for (int i=0; i<=m; i++){
		int k = f[i].fr;
		int t = 0;
		while (!ok[tGEE]) t++;
		for (int j=0; j<k; j++){
			if (t+j*d >= n){
				cout << "INVALID";
				exit(0);
			} 
			res[t+j*d] = f[i].kt;
			ok[t+j*d] = false;
		}
	}
	res[n] = '\0';
	cout << res;
}