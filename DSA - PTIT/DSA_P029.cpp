#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}

//end of template
//tu tuong: dung bfs ket hop bit_mask
//giai thich: deo biet
//other way: chu trinh halminton voi tong trong so nho nhat
//would do it later
//im sleepy rn bye
#define oo 1000000000
int n,u,v,k,c[17][17],cl[1000000][17],kc[1000000][17];
pair<int, int>  q[1000000];
void bfs()
{
    for(int i=1; i<(1<<n); i++)
        for(int j=0; j<=n; j++)
    {
        kc[i][j]=oo;
        cl[i][j]=0;
    }
    int l=1, r=0;
    q[++r]={0, 0}; cl[0][0]=1; kc[0][0]=0;
    while(l<=r)
    {
        pair<int, int> t=q[l++];
        u=t.first, k=t.second;
        for(int i=1; i<=n; i++)
        {
            if((u&(1<<(i-1)))==0)
            {
                v=u|(1<<(i-1));
                kc[v][i]=min(kc[v][i],kc[u][k]+c[k][i]);
                if(cl[v][i]==0)
                {
                    cl[v][i]=1;
                    q[++r]={v, i};
                }
            }
        }
    }
    int ds=oo;
    for(int i=1; i<=n; i++)
        ds=min(ds,kc[(1<<n)-1][i]);
    cout<<ds;
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	memset(q, 0, sizeof(q));
	memset(cl, 0, sizeof(cl));
	memset(kc, 0, sizeof(kc));
	memset(c, 0, sizeof(c));
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin >> c[i][j];
		}
	}
	bfs();
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}