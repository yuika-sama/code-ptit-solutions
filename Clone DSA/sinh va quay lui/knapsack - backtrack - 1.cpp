#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 100
using namespace std;
int n, opt[MAX], x[MAX], k, a[MAX], c[MAX];
double weight = 0, cost = 0, res = 0;
void init(){
	cin >> n >> k;
	for (int i=1; i<=n; i++){
		cin >> a[i] >> c[i];
	}
}
void print(){
	cout << res << endl;
	for (int i=1; i<=n; i++){
		if (opt[i] == 1){
			cout << a[i] << ' ' << c[i] << endl;
		}
	}
}
void update(){
	if (cost > res){
		res = cost;
		for (int i=1; i<=n; i++){
			opt[i] = x[i];
		}
	}
}
void Try(int i){
	int temp = (int)((k - weight) / a[i]);
	for (int j=temp; j>=0; j--){
		x[i] = j;
		weight += a[i]*x[i];
		cost += c[i]*x[i];
		if (i==n) update(); else
		if (cost + ((c[i+1] * (k-weight)/a[i+1])) > res){
			Try(i+1);
		}
		weight -= a[i]*x[i];
		cost -= c[i]*x[i];
	}
}
main(){
	faster();
	init();
	Try(1);
	print();
}