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
int n;
int a[1001] = {0};
bool check(){
	for (int i=1; i<=n/2; i++){
		if (a[i] != a[n-i+1]){
			return false;
		}
	}
	return true;
}
void Try(int i){
	for (int j=0; j<2; j++){
		a[i] = j;
		if (i==n){
			if (check()){	
				for (int i=1; i<=n; i++){
					cout << a[i] << ' ';
				}
				cout << endl;
			}
		} else Try(i+1);
	}
}
main(){
	cin >> n;
	Try(1);
}