#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SinhVien{
	string name, cls, id, dob;
	float gpa;
};
void nhap(SinhVien a[50], int n){
	for (int i=1; i<=n; i++){
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].cls >> a[i].dob >> a[i].gpa;
		string r = a[i].dob;
		if (r[2]!='/') r = '0' + r;
		if (r[5]!='/') r.insert(3, 1, '0');
		a[i].dob = r;
		a[i].id = to_string(i);
		while (a[i].id.size() < 3){
			a[i].id = '0' + a[i].id;
		}
		a[i].id = "B20DCCN" + a[i].id;
	}
}
void in(SinhVien a[50], int n){
	for (int i=1; i<=n; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].cls << ' ' << a[i].dob << ' ' << precision(2) << a[i].gpa << endl;
	}
}
int main(){
	faster();
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}