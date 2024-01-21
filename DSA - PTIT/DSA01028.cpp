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
int a[20], x[20];
bool ok[20] = {0};
int mx = -1;
void Try(int i){
	for (int j = x[i-1]+1; j<=n-k+i; j++){
		if (!ok[j]){
			ok[j] = true;
			x[i] = j;
			if (i==k){
				for (int i=1; i<=k; i++){
					cout << a[x[i]] << ' ';
				}
				cout << endl;
			} else Try(i+1);
			ok[j] = false;
		}
	}
}
main(){
	cin >> n >> k;
	set<int> s;
	for (int i=0; i<n; i++){
		int x;
		cin >> x;
		s.insert(x);
		mx = max(mx, x);
	}
	n = 0;
	for (int i:s){
		n+=1;
		a[n] = i;
	}

	for (int i=1; i<=k; i++){
		x[i] = i;
	}
	Try(1);
}