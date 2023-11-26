#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
//still not accepted yet
bool check_tiet(int a[10][1000], int n, int which){
	for (int i=1; i<n; i++){
		if (a[which][i] > 1 and which>=2 and which <= 8){
			return false;
		}
	}
	return true;
}
bool check_tuan(int a[10][1000], int n, int b[10][1000], int m){
	for (int i=2; i<=8; i++){
		for (int j=1; j<n; j++){
			if (a[i][j] >=2){
				if (check_tiet(b, m, i) == false){
					return false;	
				}
			}
		}
	}
	return true;
}
main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		
		string tuan, tiet;
		int week[1000], sub[1000];
		int thu;
		int a[10][1000]; //tiet hoc, i = thu, j = tiet hoc
		int b[10][1000]; //tuan hoc, i = thu, j = tuan hoc
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		int d1, d2;
		int max_tiet = -1, max_tuan = -1;
		
		for (int i=0; i<n; i++){
			cin >> thu >> tiet >> tuan;
			d1 = 1, d2 = 1;
			memset(sub, 0, sizeof(sub));
			memset(week, 0, sizeof(week));
			for (int i=0; i<tiet.size(); i++){
				sub[d1] = d1;
				if (tiet[i] == '-') sub[d1]*=-1;
				d1++;
			}
			max_tiet = max(max_tiet, d1);
			for (int i=0; i<tuan.size(); i++){
				week[d2] = d2;
				if (tuan[i] == '-') week[d2]*=-1;
				d2++; 
			}
			max_tuan = max(max_tuan, d2);
			for (int i=1; i<d1; i++){
				if (sub[i] < 0) continue;
				a[thu][i]+=1;
			}
			for (int i=1; i<d2; i++){
				if (week[i] < 0) continue;
				b[thu][i] += 1;
			}
		}
		if (check_tuan(b,max_tuan, a, max_tiet)) cout << "NO"; else cout << "YES";
		cout << endl;
	}
}