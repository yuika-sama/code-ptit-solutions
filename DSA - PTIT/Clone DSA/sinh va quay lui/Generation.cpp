#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
int x[100], n, k;
bool ok[100];
bool check;
//sinh nhi phan - de quy
void bit1(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n){
			for (int k = 1; k<=n; k++) cout << x[k];
			cout << endl;
		} else bit1(i+1);
	}
}
//sinh nhi phan - phuong phap sinh
void bit2(){
	int i = n;
	while (i>0 && x[i] == 1){
		x[i] = 0;
		i--;
	}
	if (i>0) x[i] = 1;
	else check = false;
}
void bit_gen(){
	cout << "get N:\n";
	cin >> n;
	int choose;
	while (true){
		clrscr();
		cout << "N = " << n << endl;
		cout << "1. sinh nhi phan - de quy" << endl;
		cout << "2. sinh nhi phan - gen" << endl;
		cout << "0. exit" << endl;
		check = true;
		for (int i=1; i<=n; i++) x[i] = 0;
		cin >> choose;
		if (choose == 1) bit1(1);
		else if (choose == 2)
		{
			while (check){
				for (int i=1; i<=n; i++) cout << x[i];
				cout << endl;
				bit2();
			}
		}
		else if (choose == 0) exit(0);
		else {
			clrscr();
			cout << "INVALID" << endl;
		}
		cout << "Try again? 1.Yes 2.No" << endl;
		int c; cin >> c;
		if (c==2) exit(0);
	}
}
//sinh hoan vi - de quy
void per1(int i){
	for (int j=1; j<=n; j++){
		if (ok[j] == false){
			ok[j] = true;
			x[i] = j;
			if (i == n){
				for (int k=1; k<=n; k++) cout << x[k];
				cout << endl;
			} else per1(i+1);
			ok[j] = false;
		}
	}
}
//sinh hoan vi - phuong phap sinh
void per2(){
	int i = n;
	while (i>0 && x[i] > x[i+1]) i--;
	if (i>0){
		int j = n;
		while (x[i] > x[j]) j--;
		swap(x[i], x[j]);
		int l = i+1, r = n;
		while (l<r){
			swap(x[l], x[r]);
			l++, r--;
		}
	} else check = false;
}
void per_gen(){
	cout << "get N:\n";
	cin >> n;
	int choose;
	while (true){
		clrscr();
		cout << "N = " << n << endl;
		cout << "1. sinh hoan vi - de quy" << endl;
		cout << "2. sinh hoan vi - gen" << endl;
		cout << "0. exit" << endl;
		check = true;
		memset(ok, false, sizeof(ok));
		for (int i=1; i<=n; i++) x[i] = i;
		cin >> choose;
		if (choose == 1) per1(1);
		else if (choose == 2)
		{
			while (check){
				for (int i=1; i<=n; i++) cout << x[i];
				cout << endl;
				per2();
			}
		}
		else if (choose == 0) exit(0);
		else {
			clrscr();
			cout << "INVALID" << endl;;
		}
		cout << "Try again? 1.Yes 2.No" << endl;
		int c; cin >> c;
		if (c==2) exit(0);
	}
}
//sinh to hop - de quy
void com1(int i){
	for (int j=x[i-1]+1; j<=n-k+i; j++){ //chuy?n sang sinh ch?nh h?p: thay x[i-1] -> x[j-1];
		if (ok[j] == false){
			ok[j] = true;
			x[i] = j;
			if (i==k){
				for (int r=1; r<=k; r++) cout << x[r];
				cout << endl;
			} else com1(i+1);
			ok[j] = false;
		}
	}
}
//sinh to hop - phuong phap sinh
void com2(){
	int i = k;
	while (i>0 && x[i] == n-k+i) i--;
	if (i>0){
		x[i]++;
		for (int j = i+1; j<=k; j++){
			x[j] = x[i] - i + j;
		}
	} else check = false;
}
void com_gen(){
	cout << "get N, K:\n";
	cin >> n >> k;
	int choose;
	while (true){
		clrscr();
		cout << "N = " << n << endl;
		cout << "K = " << k << endl;
		cout << "1. sinh to hop - de quy" << endl;
		cout << "2. sinh to hop - gen" << endl;
		cout << "0. exit" << endl;
		check = true;
		memset(x, 0, sizeof(x));
		cin >> choose;
		if (choose == 1){
			x[0] = 0;
			com1(1);
		}
		else if (choose == 2)
		{
			for (int i=1; i<=k; i++) x[i] = i;
			while (check){
				for (int i=1; i<=k; i++) cout << x[i];
				cout << endl;
				com2();
			}
		}
		else if (choose == 0) exit(0);
		else {
			clrscr();
			cout << "INVALID" << endl;;
		}
		cout << "Try again? 1.Yes 2.No" << endl;
		int c; cin >> c;
		if (c==2) exit(0);
	}
}
main(){
	int choose;
	while (true){
		cout << "1. sinh nhi phan" << endl;
		cout << "2. sinh hoan vi" << endl;
		cout << "3. sinh to hop" << endl;
		cout << "0. exit" << endl;
		cin >> choose;
		if (choose == 1) bit_gen();
		else if (choose == 2) per_gen();
		else if (choose == 3) com_gen();
		else if (choose == 0) exit(0);
		else {
			clrscr();
			cout << "INVALID" << endl;
		}
	}
}