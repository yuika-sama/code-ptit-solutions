#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	int a[n+5];
	for (int i=0; i<n; ++i) cin >> a[i];
	int key;
	for (int i=0; i<n; ++i){
		key = a[i];
		int j = i-1;
		while (j>=0 and a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		cout << "Buoc " << i << ": ";
		for (int j=0; j<=i; ++j){
			cout << a[j] << ' ';
		}
		cout << endl;
	}
}