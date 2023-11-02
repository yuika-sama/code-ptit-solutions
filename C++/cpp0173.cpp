#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long gcd(long long a, long long b)
{
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}
main(){
	faster()
	int t; cin >> t;
	while (t--){
		long long x,y,z,n;
		cin >> x >> y >> z >>n;
		long long l = pow(10, n - 1);
    	long long r = pow(10, n) - 1;
    	long long bc = lcm(lcm(x, y), z);
    	if (bc>r) cout << -1; else
    	if (l%bc==0) cout << l; else
    	{
    		long long d = l/bc;
    		cout << bc*(d+1);
		}
		cout << endl;
	}
}
