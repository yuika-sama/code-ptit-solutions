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
int n, k;
int a[1001];
int x[1001] = {0};
int d = 0;
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i == n){
			int s = 0;
			for (int i=1; i<=n; i++){
				if (x[i] == 1){
					s += a[i];
				}
			}
			if (s == k){
				for (int i=1; i<=n; i++){
					if (x[i] == 1){
						cout << a[i] << ' ';
					}
				}
				d++;
				cout << endl;
			}
		} else Try(i+1);
	}
}
main(){
	cin >> n >> k;
	for (int i=1; i<=n; i++) cin >> a[i];
	Try(1);
	cout << d;
}