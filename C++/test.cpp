#include<bits/stdc++.h>
using namespace std;
main(){
	vector<long long> v(1e3+1, 0);
 	int f1 = 0, f2 = 1;
 	v[0] = v[1] = 1;
 	for(int i=2;f1+f2<=1005;i++){
 		int f=f1+f2;
 		v[f] = 1;
 		f1 = f2;
 		f2 = f;
	 }
	int t;
	cin>>t;
	while(t--){
		int a[1000];
		int n; 
		cin>>n; 
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if (v[a[i]]){
				cout << a[i] << ' ';
			}
		}
		cout<<endl; 
	}
}
