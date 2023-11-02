#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class sv {
public:
    string msv, ten, lop, email;

    friend istream &operator >> (istream &is, sv &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }

    friend ostream &operator << (ostream &os, sv a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};
bool cmp(sv a, sv b){
	if (a.lop == b.lop) return a.msv < b.msv;
	return a.lop < b.lop;
}
int main(){
	faster();
	sv a[1001];
	int n; cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		cout << a[i];
	}
	return 0;
}