#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int n, a[10];
bool check = true;
void result(){
	for (int i=0; i<n; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int i){ //sinh nhi phan
	for (int j=0; j<2; j++){
		a[i] = j;
		if (i==n-1){
			result();
		} else Try(i+1);
	}
}
void Try(int i){ //sinh nhi phan
	for (int j=0; j<2; j++){
		a[i] = j;
		if (i==n-1){
			result();
		} else Try(i+1);
	}
}
main(){
	cin >> n;
	for (int i=0; i<n; i++) x[i] = i;
	Try(0);
	sort(a, a+n);
}