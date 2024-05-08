#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void search(int a[], int n, int x){
	for (int i = 0; i<n; i++){
		if (a[i] == x){
			cout << i;
			return;
		}
	}
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	int x = 0;
	search(a,n,x);
	//true input: 8
}