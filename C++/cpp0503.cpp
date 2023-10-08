#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct PhanSo{
	long long tu, mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
	long long x = __gcd(p.tu, p.mau);
	p.tu/=x;
	p.mau/=x;
}
void in(PhanSo p){
	cout << p.tu << '/' << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
