#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int cnt = 1;
struct NhanVien{
	string id, name, dob, gen, ad, tax, date;
	string d, m, y;
};
void nhap(NhanVien &a){
	if (cnt<10) a.id = "0000" + to_string(cnt++);
	else a.id = "000" + to_string(cnt++);
	cin.ignore();
	getline(cin, a.name);
	getline(cin, a.gen);
	getline(cin, a.dob);
	stringstream ss(a.dob);
    getline(ss, a.m, '/');
    getline(ss, a.d, '/');
    getline(ss, a.y, '/');
	getline(cin, a.ad);
	getline(cin, a.tax);
	cin >> a.date;
}
bool cmp(NhanVien &a, NhanVien &b)
{
    if(a.y > b.y) return 0;
    if(a.y < b.y) return 1;
    if(a.m > b.m) return 0;
    if(a.m < b.m) return 1;
    if(a.d > b.d) return 0;
    return 1;
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n){
	for (int i=0; i<n; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].gen << ' ' << a[i].dob << ' ' << a[i].ad << ' ' << a[i].tax << ' ' << a[i].date << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    scanf("\n");
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}