#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class sv{
	private:
	public:
		string name, id, cls, mail;
		friend istream &operator >> (istream &is, sv &a){
			getline(is, a.id);
			getline(is >> ws, a.name);
			getline(is, a.cls);
			getline(is, a.mail);
			return is;
		}
		friend ostream &operator << (ostream &os, sv a){
			cout << a.id << ' ' << a.name << ' ' << a.cls << ' ' << a.mail << endl;
			return os;
		}
};
bool cmp(sv a, sv b){
	return a.id < b.id;
}
main(){
	sv a[1001], x;
	int n = 0;
	while (cin >> x){
		a[n++] = x;
	}
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		cout << a[i];
	}
}