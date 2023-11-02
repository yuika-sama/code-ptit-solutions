#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct SoPhuc{
	int thuc, ao;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
	SoPhuc x;
	x.thuc = a.thuc + b.thuc;
	x.ao = a.ao + b.ao;
	SoPhuc res;
	res.thuc = x.thuc*x.thuc - x.ao*x.ao;
	res.ao = 2*x.thuc*x.ao;
	return res;
}
void hien_thi(SoPhuc a){
	cout << a.thuc << " + " << a.ao << 'i';
}
int main() {
	faster();
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}