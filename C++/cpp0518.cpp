#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct NhanVien{
	string id, name, gen, dob, adr, tax, date;
};
int d = 1;
void nhap(NhanVien a){
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.gen);
	getline(cin, a.dob);
	string r = a.dob;
	if (r[2] != '/') r = '0' + r;
	if (r[5] != '/') r.insert(3, 1, '0');
	swap(r[0], r[3]);
	swap(r[1], r[4]);
	a.dob = r;
	cin.ignore();
	getline(cin, a.adr);
	getline(cin, a.tax);
	getline(cin, a.date);
	r = a.date;
	if (r[2] != '/') r = '0' + r;
	if (r[5] != '/') r.insert(3, 1, '0');
	swap(r[0], r[3]);
	swap(r[1], r[4]);
	a.date = r;
	r = to_string(d);
	d++;
	while (r.size() < 5) r = '0' + r;
	a.id = r;
}
bool cmp(NhanVien a, NhanVien b)
{
    int ngay1 = (a.dob[0]-'0')*10 + a.dob[1]-'0';
    int ngay2 = (b.dob[0]-'0')*10 + b.dob[1]-'0';
    int thang1 = (a.dob[4]-'0')*10 + a.dob[5]-'0';
    int thang2 = (b.dob[4]-'0')*10 + b.dob[5]-'0';
    int nam1 = stoi(a.dob.substr(6));
    int nam2 = stoi(b.dob.substr(6));
    if (nam1 != nam2) return nam1 < nam2;
    if (thang1 != thang2) return thang1 < thang2;
    return ngay1 < ngay2;
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n){
	for (int i=0; i<n; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].gen << ' ' << a[i].dob << ' ' << a[i].adr << ' ' << a[i].tax << ' ' << a[i].date << endl;
	}
}
int main(){
	faster();
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}