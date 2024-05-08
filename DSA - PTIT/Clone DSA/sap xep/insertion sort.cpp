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
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	int key = 0;
	for (int i=1; i<n; i++){
		key = a[i];
		int j = i-1;
		while (j>=0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	for (int i=0; i<n; i++) cout << a[i] << ' ';
}