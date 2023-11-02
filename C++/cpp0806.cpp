#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're all too old for fairytales, my love."}
using namespace std;
//vkl de bi loi chu code juan r

int d1 = 1, d2 = 1, d3 = 1;
int n,m,k;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;
vector<HoaDon> hopdong;

class KhachHang{
	public:
		string name, id, gen, date, ad;
		friend class HoaDon;
};
class MatHang{
	public:
		string id, name, dv;
		ll cost, sell;
		friend class HoaDon;
};
class HoaDon{
	public:
		string mhd, mkh, mmh;
		int quant;
		friend ostream &operator << (ostream &os, HoaDon &a){
			//cai loz j the nay ?
			os << a.mhd << ' ' << KH[a.mkh].name << ' ' << KH[a.mkh].ad << ' ' << MH[a.mmh].name << ' ' <<  MH[a.mmh].dv << ' ' << MH[a.mmh].cost << ' ' << MH[a.mmh].sell << ' ' <<  a.quant << ' ' << MH[a.mmh].sell * a.quant << endl;
			return os;
		}
};
void getKH(){
	ifstream in("KH.in");
	in >> n;
	in.ignore();
	for (int i=0; i<n; i++){
		KhachHang kh;
		getline(in, kh.name);
		getline(in, kh.gen);
		getline(in, kh.date);
		getline(in, kh.ad);
		if (d1 < 10) kh.id = "KH00" + to_string(d1);
		else kh.id = "KH0" + to_string(d1);
		d1++;
		KH[kh.id] = kh;
	}
}
void getMH(){
	ifstream in("MH.in");
	in >> m;
	in.ignore();
	for (int i=0; i<m; i++){
		MatHang mh;
		getline(in, mh.name);
		getline(in, mh.dv);
		in >> mh.cost >> mh.sell;
		in.ignore();
		if (d2 < 10) mh.id = "MH00" + to_string(d2);
		else mh.id = "MH0" + to_string(d2);
		d2++;
		MH[mh.id] = mh;
	}
}
void getHD(){
	ifstream in("HD.in");
	in >> k;
	in.ignore();
	for (int i=0; i<k; i++){
		HoaDon hd;
		in >> hd.mkh >> hd.mmh;
		in >> hd.quant;
		in.ignore();
		if (d3 < 10) hd.mhd = "HD00" + to_string(d3);
		else hd.mhd = "HD0" + to_string(d3);
		d3++;
		hopdong.pb(hd);
	}
}
void printHD(){
	for (int i = 0; i<hopdong.size(); i++){
		cout << hopdong[i];
	}
}
int main(){	
	faster();
    getKH();
    getMH();
    getHD();
    printHD();
    return 0;
}