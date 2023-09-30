#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SinhVien{
	string name, cls, id, dob;
	float gpa;
};
string chuanhoa(string s){
	string r; stringstream ss(s);
	string tmp = "";
	while (ss >> r){
		for (int i=0; i<r.size(); i++){
			r[i] = tolower(r[i]);
		}
		r[0] = toupper(r[0]);
		tmp += r + ' ';
	}
	return tmp;
}
void nhap(SinhVien a[50], int n){
	for (int i=1; i<=n; i++){
		cin.ignore();
		getline(cin, a[i].name);
		a[i].name = chuanhoa(a[i].name);
		getline(cin, a[i].cls);
		cin >> a[i].dob >> a[i].gpa;
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
bool cmp(SinhVien a, SinhVien b){
	return (a.gpa > b.gpa);
}
void sapxep(SinhVien a[50], int n){
	sort(a+1, a+n+1, cmp);
}
void in(SinhVien a[50], int n){
	for (int i=1; i<=n; i++){
		cout << a[i].id << ' ' << a[i].name << a[i].cls << ' ' << a[i].dob << ' ' << precision(2) << a[i].gpa << endl;
	}
}
int main(){
	faster();
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}