#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct point{
	int x,y,z;
};

void solve(){
	point a,b,c,d;
	cin >> a.x >> a.y >> a.z;
	cin >> b.x >> b.y >> b.z;
	cin >> c.x >> c.y >> c.z;
	cin >> d.x >> d.y >> d.z;
	
	point ab, ac, ad, abc;
	ab.x = b.x - a.x; ab.y = b.y - a.y; ab.z = b.z - a.z;
	ac.x = c.x - a.x; ac.y = c.y - a.y; ac.z = c.z - a.z;
	ad.x = d.x - a.x; ad.y = d.y - a.y; ad.z = d.z - a.z;
	
	abc.x = ab.y*ac.z - ab.z*ac.y;
	abc.y = ab.z*ac.x - ab.x*ac.z;
	abc.z = ab.x*ac.y - ab.y*ac.x;
	
	int mul = abc.x*ad.x + abc.y*ad.y + abc.z*ad.z;
	if (mul == 0) cout << "YES"; else cout << "NO";
}
int main() {
    faster();
    int t; cin >> t;
    while (t--){
    	solve();
    	cout << endl;
	}
    return 0;
}