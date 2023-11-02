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
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int m[101][101];
		int a = 1;
		for (int i=1; i<=4*n; i++){
			for (int j=1; j<=4*n; j++){
				m[i][j] = a++;
			}
		}
		int x = 4*n;
		int N[10001];
		int val = 0;
		for (int j=1; j<=4*n; j+=2){ // cuon 2
			for (int i = j; i<=x; i++){ //tren xuong duoi
				N[val++] = m[i][j];
			}
			for (int i = j+1; i<x; i++){ //trai sang phai
				N[val++] = m[x][i];
			}
			for (int i = x-1; i>j; i--){ //duoi len tren
				N[val++] = m[i][x-1];
			}
			for (int i = x-2; i>j+1; i--){ //phai sang trai
				N[val++] = m[j+1][i];
			}
			x-=2;
		}
		int y = 4*4*n*n;
		x = 4*n;
		int M[10001];
		int val2 = 0;
		for (int i=1; i<=4*n; i++){
			for (int j = 1; j<=4*n; j++){
				m[i][j] = y--;
			}
		}
		for (int j=1; j<=4*n; j+=2){ // cuon 1
			for (int i = j; i<=x; i++){
				M[val2++] = m[i][j];
			}
			for (int i = j+1; i<x; i++){
				M[val2++] = m[x][i];
			}
			for (int i = x-1; i>j; i--){
				M[val2++] = m[i][x-1];
			}
			for (int i = x-2; i>j+1; i--){
				M[val2++] = m[j+1][i];
			}
			x-=2;
		}
		for (int i = val-1; i>=0; i--){
			cout << M[i] << ' ';
		}
		cout << endl;
		for (int i = val-1; i>=0; i--){
			cout << N[i] << ' ';
		}
		cout << endl;
	}
}