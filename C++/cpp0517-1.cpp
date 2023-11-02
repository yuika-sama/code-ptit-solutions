#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct NhanVien{
	string name, gender, dob, ad, tax, date;
};
string stt(int i){
	string r = "";
	while (i){
		r += char(i%10);
		i/=10;
	}
	reverse(r.begin(), r.end());
	while (r.size()<5){
		r = '0' + r;
	}
	return r;
}
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.ad);
	getline(cin, a.tax);
	getline(cin, a.date);
}
void inds(NhanVien a[], int n){
	for (int i=0; i<n; i++){
		cout << stt(i+1) << ' ';
		cout << a[i].name << ' ' << a[i].gender << ' ' << a[i].dob << ' ' << a[i].ad << ' ' << a[i].tax << ' ' << a[i].date << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
