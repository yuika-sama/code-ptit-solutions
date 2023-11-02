#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int patrition(int a[], int l, int h){ //xay dung cach chon pivot toi uu
	int x = a[h];
	int i  = l-1;
	for (int j=l; j<h; j++){
		if (a[j] <= x){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[h]);
	return (i+1);
}
void quicksort(int a[], int l, int h){
	if (l<h){
		int p = patrition(a, l, h);
		quicksort(a, l, p-1);
		quicksort(a, p+1, h);
	}
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	quicksort(a, 0, n-1);
	for (int i=0; i<n; i++) cout << a[i] << ' ';
}