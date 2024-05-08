#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define sz size()
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s1, s2;
    while(t--)
    {
        cin >> s1 >> s2;	
        string tmp = "";
        for(char i : s2) if(i >= 'A' && i <= 'Z' ) tmp += i;
        int d1=0;
        for (int i = 0; i<tmp.size(); i++){
        	if (tmp[i] - 'K' + '0' == s1[i]){
        		d1++;
			} 
			else if (tmp[i] - 'A' + '0' == s1[i]) {
				d1++;
			}
		}
        if(d1==s1.size()  && tmp.size()==s1.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}