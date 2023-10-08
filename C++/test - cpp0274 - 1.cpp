#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int k;
	cin>>k;
	while(k--){
	    int a;
	    cin >>a;
	    int mang[a+5];
	    for(int i=0;i<a;i++){
	        cin >>mang[i];
	    }
	    int cnt=0;
	    for(int i=0;i<a-1;i++){
	    	int flag = 0;
	        for(int j=i+1;j<a;j++){
	            if(mang[i]==mang[j]){
	                cnt++;
	                flag = 1;
	            }
	        }
	        if(flag == 1){
	        	cnt++;
			}
	    }
	    cout << cnt <<endl;
	}
}