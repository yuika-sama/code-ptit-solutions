#include <bits/stdc++.h>
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love.";}
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 100
using namespace std;
const int maxn = 1000010;
int main(){
	fstream fi, fo;
	fi.open("CHENHLECH.INP", ios::in);
	fo.open("CHENHLECH.OUT", ios::out);
	faster();
	int n; string s;
	fi >> n >> s;
	vector<vector<int>> ch(26);
	for (int i=0; i<n; i++){
		ch[s[i] - 'a'].pb(i); //vi tri xuat hien cua cac ki tu
	}
	int res = 0;
	for (int x=0; x<26; x++){
		for (int y=0; y<26; y++){
			if (x==y || ch[x].size() == 0 || ch[y].size() == 0) continue; //trung nhau hoac khong ton tai
			vector<int> a;
//			for (int i = 0; i<n; i++){
//				if (s[i] == x + 'a') a.pb(1); else if (s[i] == y + 'a') a.pb(-1);
//			}
			int l = 0, r = 0; //khong lam 2 con tro thi chi co tle =))
			while (l<ch[x].size() || r<ch[y].size()){ //1: ki tu x xuat hien truoc; -1: ki tu y xuat hien truoc
				if (r>=ch[y].size() || (l < ch[x].size() && ch[x][l] < ch[y][r])){
					a.pb(1);
					l++;
				} else {
					a.pb(-1);
					r++;
				}
			}
			int loc_max = 0; //maximum on step
			bool is = false;
			if (a.size() > 0) a[0] = 0;//kdane se sai, somehow
			for (int k = 1; k<a.size(); k++){ //tim day con co tong lon nhat
				if (a[k-1] + a[k] < 0){
					a[k] = 0;
					is = false; //<=0 thi khong can xet nua
				} else {
					if (a[k] < 0) is = true;
					a[k] += a[k-1];
				}
				if (is == true){
					loc_max = max(loc_max, a[k]);//tong tien to hien tai
				} else {
					loc_max = max(loc_max, a[k]-1);//vi khong can xet a[k] nua nen se xet voi tong tien to truoc do la a[k-1]
				}
			}
			res = max(loc_max, res);
		}
	}
	fo << res;	
	return 0;
	fi.close();
	fo.close();
}