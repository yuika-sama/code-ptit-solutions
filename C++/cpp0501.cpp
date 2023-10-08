#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct Point{
	double x, y;
};
void input(Point &a){
	cin >> a.x >> a.y;
}
double distance(Point a, Point b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) * (a.y - b.y));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
