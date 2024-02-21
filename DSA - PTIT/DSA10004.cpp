#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
//cond of problem:
//1: Euler path: di qua tat ca cac canh, moi canh mot lan. vi tri ket thuc khong phai dinh bat dau
//2: Euler cycle: di qua tat ca cac canh, moi canh mot lan. vi tri ket thuc la dinh bat dau
//0: None of these


//solving
// Euler cycle: mot do thi vo huong G co chu trinh Euler neu:
// - tat ca cac dinh co bac la chan <=> khong co dinh bac le
// - tat ca cac dinh co deg > 0 va thuoc cung 1cc(connected component),
// tuc la khong co nhieu hon 1cc

// Euler path: mot do thi vo huong G co duong di Euler neu:
// - chi co duy nhat 0 hoac 2 dinh bac le
// - tat ca cac dinh co deg > 0 va thuoc cung 1cc(connected component),
// tuc la khong co nhieu hon 1cc


int n, m;
int x, y;
si adj[1005];
bool vs[1005];
int parent[1005];

void solve(){
	/*hav fun with coding*/
	for (auto& i:adj){
		i.clear();
	}
	memset(vs, false, sizeof(vs));
	memset(parent, 0, sizeof(parent));
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	int odd_deg = 0;
	for (int i=1; i<=n; i++){
		odd_deg += (adj[i].size()%2==1);
	}
	if (odd_deg == 0) cout << 2; else
	if (odd_deg == 2) cout << 1; else
	cout << 0;
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}