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
		PhanSo(long long t, long long m){ //phuong thuc khai bao cho co, thoa man de bai
			tu = t, mau = m;
		}
		void rutgon(){
			long long gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
		friend istream &operator >> (istream &is, PhanSo &a){
			is >> a.tu >> a.mau;
			return is;
		}
		friend ostream &operator << (ostream &os, PhanSo a){
			os << a.tu << "/" << a.mau;
			return os;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}