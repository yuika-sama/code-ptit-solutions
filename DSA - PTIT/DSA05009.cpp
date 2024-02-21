#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int a[105], n, sum;
bool check, ok[105];
void Try(int i, int s){
	if (i==n or check or s == sum/2){
		if (s == sum/2) check = true;
		return;
 	}
 	if (s+a[i] <= sum/2) Try(i+1, s+a[i]);
 	Try(i+1, s);
}

main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n;
		sum = 0;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			sum += a[i];
		}
		check = false;
		memset(ok, false, sizeof(ok));
		sort(a, a+n);
		if (sum%2==0) Try(1, 0);
		if (check) cout << "YES"; else cout << "NO";
		cout << endl;
	}
}