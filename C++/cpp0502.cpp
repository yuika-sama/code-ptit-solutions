#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct ThiSinh{
	string name, dob;
	float a,b,c,sum;
};
void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.dob >> A.a >> A.b >> A.c;
    A.sum = A.a + A.b + A.c;
}
void in(ThiSinh a){
	cout << a.name << ' ' << a.dob << ' ' << precision(1) << a.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
