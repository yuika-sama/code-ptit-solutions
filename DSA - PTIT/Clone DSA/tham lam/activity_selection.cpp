#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n';
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
	if (a.second > b.second) return false;
	return true;
}
main(){
	bool ok[100] = {0};
	vector<pair<int, int>> a;
	int n; 
	cin >> n;
	int x, y;
	for (int i=0; i<n; i++){
		cin >> x >> y;
		a.push_back({x, y});	
//		a[i] = {x, y};
	}
	sort(a.begin(), a.end(), cmp);
	int i = 0, d = 1;
	ok[0] = true;
	for (int j=1; j<n; j++){
		if (a[i].second <= a[j].first){
			d++;
			ok[j] = true;
			i = j;
		}
	}
	cout << d << endl;
	for (int i=0; i<n; i++){
		if (ok[i] == true){
			cout << a[i].first << ' ' << a[i].second << endl;
		}
	}
}