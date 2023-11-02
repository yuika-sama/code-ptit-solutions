#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int d = 1;
string chuanhoa(string a){
	//dd/mm/yyyy
	if (a[2]!='/') a = '0' + a;
	if (a[5]!='/') a.insert(3,1,'0');
	return a;
}
string eula_cute(string a){
	//NGUYEN DUC ANH
	stringstream ss(a);
	string r;
	string res = "";
//	vector<string> res;
	while (ss >> r){
		for (int i=0; i<r.size(); i++){
			r[i] = tolower(r[i]);
		}
		r[0] = toupper(r[0]);
		res = res + r + ' ';
	}
	return res;
}
class SinhVien{
//	private:
	public:
		string name, cls, dob;
		int id;
		double gpa;
		friend istream &operator >> (istream &is, SinhVien &a){
			getline(is >> ws, a.name);
			a.name = eula_cute(a.name);
			is >> a.cls >> a.dob >> a.gpa;
			a.dob = chuanhoa(a.dob);
			a.id = d++;
			return is;
		}
		friend ostream &operator << (ostream &os, SinhVien a){
			cout << "B20DCCN";
			if (a.id < 10) cout << "00"; else cout << "0"; 
			cout << a.id << ' ' << a.name << a.cls << ' ' << a.dob << ' ' << precision(2) << a.gpa << endl;
			return os;
		}
};
ll gcd = __gcd(a,b);
bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}
int main(){
	faster();
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}