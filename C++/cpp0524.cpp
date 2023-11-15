#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SinhVien{
	string name, id, cls;
	double p1, p2, p3;
};
void nhap(SinhVien &a){
	cin.ignore();
	getline(cin, a.id);
	getline(cin, a.name);
	getline(cin, a.cls);
	cin >> a.p1 >> a.p2 >> a.p3;
}
bool cmp(SinhVien a, SinhVien b){
	return a.id < b.id;
}
void sap_xep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}
void in_ds(SinhVien a[], int n){
	for (int i=0; i<n; i++){
		cout << precision(0) << i+1 << ' ' << a[i].id << ' ' << a[i].name << ' ' << a[i].cls << ' ' << precision(1) << a[i].p1 << ' ' << a[i].p2 << ' ' << a[i].p3 << endl;
//		d++;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}