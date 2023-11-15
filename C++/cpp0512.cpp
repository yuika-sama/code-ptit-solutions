#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct PhanSo{
	long long tu, mau;
};
void process(PhanSo A, PhanSo B){
	PhanSo a = A, b = B;
	long long lcm = a.mau * b.mau;
	a.tu *= b.mau;
	b.tu *= a.mau;
	a.mau = b.mau = lcm;
	
	PhanSo c;
	c.tu = a.tu+b.tu, c.mau = lcm;
	c.tu*=c.tu, c.mau*=c.mau;
	long long gcd = __gcd(c.tu, c.mau);
	c.tu/=gcd, c.mau/=gcd;
	cout << c.tu << '/' << c.mau << ' ';
	
	PhanSo d;
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	gcd = __gcd(d.tu, d.mau);
	d.tu /=gcd, d.mau/=gcd;
	cout << d.tu << '/' << d.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}