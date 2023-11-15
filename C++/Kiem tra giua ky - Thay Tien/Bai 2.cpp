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
	public:
		string name;
		ll ac, sub;
};
bool cmp(sv a, sv b){
	if (a.ac == b.ac){
		if (a.sub == b.sub){
			return a.name < b.name;
		}
		return a.sub < b.sub;
	}
	return a.ac > b.ac;
}
main(){
	fstream fi;
	fi.open("LUYENTAP.in", ios::in);
	int n; fi >> n;
	sv a[100];
	for (int i=0; i<n; i++){
		fi.ignore();
		getline(fi, a[i].name);
		fi >> a[i].ac >> a[i].sub;
	}
	fi.close();
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		cout << a[i].name << ' ' << a[i].ac << ' ' << a[i].sub << endl;
	}
}