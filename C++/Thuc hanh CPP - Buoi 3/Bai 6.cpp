#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int n;
int x[25];
void Try(int i){
	for (int j=0; j<=1; j++){
		x[i] = j;
		if (i==n){
			for (int k=1; k<=n; k++){
				cout << x[k];
			}
			cout << ' ';
		} else Try(i+1);
	}
}
main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		memset(x, 0, sizeof(x));
		Try(1);
		cout << endl;
	}
}