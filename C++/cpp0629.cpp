#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class dn{
	public:
		string id, name;
		int val;
		friend istream &operator >> (istream &is, dn &a){
			scanf("\n");
			getline(cin, a.id);
			getline(cin, a.name);
			cin >> a.val;
			return is;
		}
		friend ostream &operator <<(ostream &os, dn a){
			os << a.id << ' ' << a.name << ' ' << a.val << endl;
			return os;
		}
};
bool cmp(dn a, dn b){
	if (a.val == b.val) return a.id < b.id;
	return a.val > b.val;
}
main(){
	int n; cin >> n;
	dn a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	int t; cin >> t;
	while (t--){
		int x, y;
		cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x <<" DEN " << y <<" SINH VIEN:\n";
		for (int i=0; i<n; i++){
			if (a[i].val >= x && a[i].val <= y){
				cout << a[i];
			}
		}
	}
}