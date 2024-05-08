#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int Bonus(string s){
	if (s == "GD") return 250000;
	if (s == "PGD") return 200000;
	if (s == "TP") return 180000;
	if (s == "NV") return 150000;
	return 0;
}
int gifted(int day, int val){
	if (day >= 25) return val*20/100;
	if (day >= 22) return val*10/100;
	return 0;
}
class nv{
	public:
		string id, name, lv;
		int val, day, gift, bonus, sum, overall;
		friend istream &operator >> (istream &is, nv &a){
			getline(is, a.name);
			is >> a.val >> a.day >> a.lv;
			a.id = "NV01";
			a.overall = a.val*a.day;
			a.gift = gifted(a.day, a.overall);
			a.bonus = Bonus(a.lv);
			a.sum = a.overall + a.gift + a.bonus;
			return is;
		}
		friend ostream &operator << (ostream &os, nv a){
			os << a.id << ' ' << a.name << ' ' << a.overall << ' ' << a.gift << ' ' << a.bonus << ' ' << a.sum;
			return os;
		}
};
main(){
	nv a;
	cin >> a;
	cout << a;
}