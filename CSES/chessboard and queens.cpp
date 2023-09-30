#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int d = 0;
char chess[9][9];
bool row[100] = {}, l[100] = {}, r[100] = {};
void Try(int i){
	for (int j=0; j<8; j++){
		if (row[j] == false && l[i-j+7] == false && r[i+j] == false && chess[i][j] == '.'){
			row[j] = true; l[i-j+7] = true; r[i+j] = true;
			if (i==7) d++; else Try(i+1);
			row[j] = false; l[i-j+7] = false; r[i+j] = false;
		}
	}
	
}
main(){
//	char chess[9][9];
	for (int i=0; i<8; i++){
		for (int j=0; j<8; j++){
			cin >> chess[i][j];
		}
	}
	memset(row, 0, 100);
	memset(l, 0, 100);
	memset(r, 0, 100);
	Try(0);
	cout << d;
}