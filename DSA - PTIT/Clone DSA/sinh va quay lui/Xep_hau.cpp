#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int n, x[100];
bool ok[200] = {0}, xuoi[200] = {0}, nguoc[200] = {0}; //ok: cot, xuoi: duong cheo tu trai sang phai, nguoc: duong cheo tu phai sang trai
void Init(){
	cin >> n;
	for (int i=1; i<=n; i++){
		x[i] = i;
	}
}
void result(){
	for (int i=1; i<=n; i++) cout << x[i];
	cout << endl;
}
void Try(int i){
	for (int j=1; j<=n; j++){
		if (!ok[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
			ok[j] = xuoi[i-j+n] = nguoc[i+j-1] = true;
			x[i] = j;
			if (i == n) result();
			else Try(i+1);
			ok[j] = xuoi[i-j+n] = nguoc[i+j-1] = false;
		}
	}
}
main(){
	Init();
	if (n<=3) cout << "Invalid";
	Try(1);
}