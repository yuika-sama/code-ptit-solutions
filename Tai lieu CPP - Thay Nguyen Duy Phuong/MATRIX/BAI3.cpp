#include <bits/stdc++.h> 
using namespace std; 
#define MAX 11  
void Solution(int m, int n, int A[MAX][MAX]) { 
    int i, k = 0, l = 0; 
    while (k < m && l < n) { 
        //1. In hang thu dau tien
        for (i = l; i < n; ++i) { 
            cout << A[k][i] << " "; 
        } 
        k++;   //nho tang chi so hang
        //2. In cot cuoi cung          
        for (i = k; i < m; ++i) { 
            cout << A[i][n - 1] << " "; 
        } 
        n--; //nho giam chi so cot
  
        //3. In hang duoi cung
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                cout << A[m - 1][i] << " "; 
            }             
        }   
        m--; //nho bot hang di 1
        //3.In cot dau tien                   
        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                cout << A[i][l] << " "; 
            }             
        } 
        l++; //nho tang chi so cot
    } 
    cout<<endl;
} 
//Giai phap de qui
void Solution1(int A[MAX][MAX], int i, int j, int m, int n) { 
    // neu i, j vuot qua kich co ma tran
    if (i >= m or j >= n) {
    	cout<<endl; return;
	} 
    // in hang thu nhat
    for (int p = i; p < n; p++) 
        cout << A[i][p] << " ";   
    // in cot cuoi cung
    for (int p = i + 1; p < m; p++) 
        cout << A[p][n - 1] << " ";   
    // in hang cuoi cung neu hang dau va hang cuoi khac nhau
    if ((m - 1) != i) 
        for (int p = n - 2; p >= j; p--) 
            cout << A[m - 1][p] << " ";   
    // in cot dau tien neu cot dau va cot cuoi khac nhau
    if ((n - 1) != j) 
        for (int p = m - 2; p > i; p--) 
            cout << A[p][j] << " "; 
  	//in ma tran voi kich thuoc con lai
    Solution1(A, i + 1, j + 1, m - 1, n - 1); 
} 
//test solution
int main() { 
    int A[MAX][MAX], m, n, T;cin>>T;
    while(T--){
    	cin>>m>>n;
    	for(int i=0; i<m; i++){
    		for(int j=0; j<n; j++) 
    			cin>>A[i][j];
		}
		Solution1(A, 0, 0, m, n);
	}
}
