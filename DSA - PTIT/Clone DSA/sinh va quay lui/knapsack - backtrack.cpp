#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
#define MAX 100
int x[MAX], n, opt[MAX];
float b, weight = 0, cost = 0, a[MAX], c[MAX], res = 0;
void init(){
	cin >> n >> b;
	for (int i=1; i<=n; i++){
		cin >> a[i] >> c[i];
	}

}
void result(){
	cout << res << endl;
	for (int i=1; i<=n; i++){
		cout << opt[i] << ' ';
	}
}
void update(){
	if(cost > res){
		res = cost;
		for (int i=1; i<=n; i++){
			opt[i] = x[i];
		}
	}
}
void backtrack(int i){
	int t = (int)((b-weight)/a[i]);
	for (int j=t; j>=0; j--){
		x[i] = j;
		weight += a[i]*x[i];
		cost += c[i]*x[i];
		if(i==n) update(); else
		if (cost + c[i+1]*((b-weight)/a[i+1]) > res){
			backtrack(i+1);
		}
		weight -= a[i]*x[i];
		cost -= c[i]*x[i];
	}
}
//4 8
//5 10
//3 5
//2 3
//4 6
main(){
	init();
	backtrack(1);
	result();
}