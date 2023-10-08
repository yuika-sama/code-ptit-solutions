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
	long long x = __gcd(p.tu, p.mau);
}
PhanSo tong(PhanSo p, PhanSo q){
	PhanSo t;
	t.tu = p.tu*q.mau + q.tu*p.mau;
	t.mau = q.mau*p.mau;
	long long x = __gcd(t.tu, t.mau);
	t.tu /= x;
	t.mau /= x;
	return t;
}
void in(PhanSo p){
	cout << p.tu << '/' << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
