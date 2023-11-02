#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're all too old for fairytales, my love."}
using namespace std;

int d1 = 0, d2 = 0, d3 = 0;
class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang{
	public:
		string name, id, gen, date, ad;
		friend class HoaDon;
		friend istream &operator >> (istream &is, KhachHang &a){
			scanf("\n");
			++d1;
			if (d1<10) a.id = "KH00" + to_string(d1);
			else a.id = "KH0" + to_string(d1);
			getline(is, a.name);
			getline(is, a.gen);
			getline(is, a.date);
			getline(is, a.ad);
//			if (a.date[2] != '/') a.date = '0' + a.date;
//			if (a.date[5] != '/') a.date.insert(3,1,'0');
			KH[a.id] = a;
			return is;
		}
};
class MatHang{
	public:
		string id, name, dv;
		ll cost, sell;
		friend class HoaDon;
		friend istream &operator >> (istream &is, MatHang &a){
			++d2;
			scanf("\n");
			if (d2<10) a.id = "MH00" + to_string(d2);
			else a.id = "MH0" + to_string(d2);
			getline(is, a.name);
			getline(is, a.dv);
			cin >> a.cost >> a.sell;
			MH[a.id] = a;
			return is;
		}
};
class HoaDon{
	public:
		string mhd, mkh, mmh;
		ll quant;
		friend istream &operator >> (istream &is, HoaDon &a){
			scanf("\n");
			++d3;
			if (d3<10) a.mhd = "HD00" + to_string(d3);
			else a.mhd = "HD0" + to_string(d3);
			cin >> a.mkh >> a.mmh >> a.quant;
			return is;
		}
		friend ostream &operator << (ostream &os, HoaDon a){
			//cai loz j the nay ?
			os << a.mhd << ' ' << KH[a.mkh].name << ' ' << KH[a.mkh].ad << ' ' << MH[a.mmh].name << ' ' << MH[a.mmh].dv << ' ' << MH[a.mmh].cost << ' ' << MH[a.mmh].sell << ' ' << a.quant << ' ' << MH[a.mmh].sell * a.quant << endl;
			return os;
		}
};
int main(){
	faster();
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}