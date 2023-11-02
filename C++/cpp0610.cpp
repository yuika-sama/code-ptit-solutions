#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long t=0, long long m=1){
			tu = t;
			mau = m;
		}
		void rutgon(){
			long long gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
		friend istream &operator >> (istream &is, PhanSo &a){
			return is >> a.tu >> a.mau;
		}
		friend ostream &operator << (ostream &os, PhanSo a){
			return os << a.tu << '/' << a.mau;
		}
		PhanSo operator + (PhanSo b){
			PhanSo A;
			A.tu = tu*b.mau + b.tu*mau;
			A.mau = mau*b.mau;
			A.rutgon();
			return A;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}