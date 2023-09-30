#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; 
	cin >> n;
	vector<int> a(2*1e5, 0);	
	for (int i=0; i<n-1; i++){
		int x;	cin >> x;
		a[x]++;
	} 
	for (int i=1; i<=n; i++){
		if (a[i] == 0){
			cout << i;
			break;
		}
	}
}
