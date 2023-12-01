//shout out and thank to Vu Cong Tuan Duong for his solution
#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're all too old for fairytales, my love."}
using namespace std;

class khachhang;
class mathang;
class hoadon;

int c_kh = 1;
int c_mh = 1;
int c_hd = 1;

map<string, khachhang> m_kh;
map<string, mathang> m_mh;

class khachhang{
	public:
		string id = "KH";
		string name, gen, dob, ad;
};

class mathang{
	public:
		string id = "MH";
		string name, dv;
		ll buy, sell;
};

class hoadon{
	public:
		string id = "HD";
		string mkh, mmh;
		ll quantity, profit, money;
};

main(){
	/*
		initiate: getting information from files
	*/
	khachhang kh_list[1000];
	mathang mh_list[1000];
	hoadon hd_list[1000];
	fstream fkh, fmh, fhd;
	fkh.open("KH.in");
	fmh.open("MH.in");
	fhd.open("HD.in");
	int n, m, k, i;
	fkh >> n;
	fmh >> m;
	fhd >> k;
	vector<string> kh_str;
	vector<string> mh_str;
	vector<string> hd_str;
	string temp;
	while (getline(fkh, temp)){
		kh_str.pb(temp);
	}
	while (getline(fmh, temp)){
		mh_str.pb(temp);
	}
	while (getline(fhd, temp)){
		hd_str.pb(temp);
	}
	fkh.close();
	fmh.close();
	fhd.close();
	int cur_kh = 1;
	int cur_mh = 1;
	int cur_hd = 1;
	/*
		get customers's information and then push them into a map
	*/
	for (int i=0; i<n; ++i){
		temp = to_string(c_kh);
		while (temp.size()!=3){
			temp = "0" + temp;
		}
		kh_list[i].id += temp;
		c_kh++;
		if (kh_str[cur_kh] == " ") cur_kh++;
		kh_list[i].name = kh_str[cur_kh++];
		if (kh_str[cur_kh] == " ") cur_kh++;
		kh_list[i].gen = kh_str[cur_kh++];
		if (kh_str[cur_kh] == " ") cur_kh++;
		kh_list[i].dob = kh_str[cur_kh++];
		if (kh_str[cur_kh] == " ") cur_kh++;
		kh_list[i].ad = kh_str[cur_kh++];
		m_kh[kh_list[i].id] = kh_list[i];
	}
	/*
		get items's information and then push them into a map
	*/
	for (int i=0; i<m; ++i){
		temp = to_string(c_mh);
		while (temp.size()!=3){
			temp = "0" + temp;
		}
		mh_list[i].id += temp;
		c_mh++;
		if (mh_str[cur_mh] == " ") cur_mh++;
		mh_list[i].name = mh_str[cur_mh++];
		if (mh_str[cur_mh] == " ") cur_mh++;
		mh_list[i].dv = mh_str[cur_mh++];
		if (mh_str[cur_mh] == " ") cur_mh++;
		mh_list[i].buy = stoi(mh_str[cur_mh++]);
		if (mh_str[cur_mh] == " ") cur_mh++;
		mh_list[i].sell = stoi(mh_str[cur_mh++]);
		m_mh[mh_list[i].id] = mh_list[i];
	}
	/*
		get bills's information and then push them into a map
	*/
	for (int i=0; i<k; ++i){
		temp = to_string(c_hd);
		while (temp.size()!=3){
			temp = "0" + temp;
		}
		hd_list[i].id += temp;
		c_hd++;
		stringstream ss(hd_str[cur_hd++]);
		string tmp;
		vector<string> token;
		while (ss>>tmp){
			token.pb(tmp);
		}
		hd_list[i].mkh = token[0];
		hd_list[i].mmh = token[1];
		hd_list[i].quantity = stoi(token[2]);
		hd_list[i].money = m_mh[hd_list[i].mmh].sell *  hd_list[i].quantity;
		hd_list[i].profit = hd_list[i].money - m_mh[hd_list[i].mmh].buy*hd_list[i].quantity;
	}
	/*
		print output
	*/
	for (int i=0; i<k; i++){
		cout << hd_list[i].id << ' ' << m_kh[hd_list[i].mkh].name << ' ' << m_kh[hd_list[i].mkh].ad << ' '; 
		cout << m_mh[hd_list[i].mmh].name << ' ' << m_mh[hd_list[i].mmh].dv << ' ';
		cout << m_mh[hd_list[i].mmh].buy << ' ' << m_mh[hd_list[i].mmh].sell << ' ';
		cout << hd_list[i].quantity << ' ' << hd_list[i].money;
		cout << endl;
	}
}
