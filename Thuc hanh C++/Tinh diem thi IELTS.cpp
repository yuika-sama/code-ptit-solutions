#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
double band(int n){ //dont ask me why i made this shit =)))))
	if (n==3 || n==4) return 2.5;
	if (n==5 || n==6) return 3.0;
	if (n>=7 && n<=9) return 3.5;
	if (n>=10 && n<=12) return 4.0;
	if (n>=13 && n<=15) return 4.5;
	if (n>=16 && n<=19) return 5.0;
	if (n>=20 && n<=22) return 5.5;
	if (n>=23 && n<=26) return 6.0;
	if (n>=27 && n<=29) return 6.5;
	if (n>=30 && n<=32) return 7.0;
	if (n==33 || n==34) return 7.5;
	if (n==35 || n==36) return 8.0;
	if (n==37 || n==38) return 8.5;
	if (n==39 || n==40) return 9.0;
}
double ans(double n)
{
    double tmp = n - (int) n;
    if(tmp < 0.25) return n - tmp;
    if(tmp < 0.75) return n - tmp + 0.5;
    return n - tmp + 1.0;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int read, lis;
		double speak, write;
		double r, l;
		cin >> read >> lis >> speak >> write;
		r = band(read), l = band(lis);
		double rate = (speak + write + l + r) / 4.0;
		rate = ans(rate);
		cout << precision(1) << rate << endl;
	}
}