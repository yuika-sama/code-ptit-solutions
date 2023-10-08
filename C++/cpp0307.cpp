#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
//ko the chay tren dev c++
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s1, s2, tmp;
        getline(cin, s1);
        getline(cin, s2);
    
        map<string, bool> m;
    
        stringstream ss1(s1);
        while (ss1 >> tmp)
            m[tmp] = 1;
    
        stringstream ss2(s2);
        while (ss2 >> tmp)
        {
            if (m.find(tmp) != m.end())
                m.erase(m.find(tmp));//xoa gia tri trung lap
        }
    
        for (auto x : m)
            cout << x.first << " ";
        cout << endl;
	}
}
