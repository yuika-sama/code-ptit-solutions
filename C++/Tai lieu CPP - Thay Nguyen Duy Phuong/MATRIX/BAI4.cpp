// BAI4: 
#include <bits/stdc++.h> 
using namespace std;   
#define MAX 51   
// kiem tra o co the duyet duoc hay khong 
int isSafe(int M[][MAX], int m, int n, int row, int col, bool visited[][MAX]) { 
    return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (M[row][col] && !visited[row][col]); 
} 
  
// A utility function to do DFS for a 
// 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void DFS(int M[][MAX], int m, int n, int row, int col,  bool visited[][MAX]) { 
    // 8 o ke nhau cua o cho truoc
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };   
    // thiet lap trang thai o
    visited[row][col] = true;  
    // de qui den o tiep theo
    for (int k = 0; k < 8; ++k) 
        if (isSafe(M, m, n, row + rowNbr[k], col + colNbr[k], visited)) 
            DFS(M, m, n, row + rowNbr[k], col + colNbr[k], visited); 
} 
int Solution(int M[][MAX], int m, int n) { 
    // tao mang visited va dien vao false
    bool visited[MAX][MAX]; 
    memset(visited, 0, sizeof(visited)); 
    int count = 0; //so mien la 0
    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < n; ++j)   
            // neu o co gia tri 1 va chua tham
            if (M[i][j] && !visited[i][j]) { 
                DFS(M, m, n, i, j, visited);                   
                ++count; //ket thuc ta cong so mien
            } 
  
    return count; 
}   
// Test solution
int main() { 
	int M[MAX][MAX], m, n, T; cin>>T;
	while(T--){
		cin>>m>>n;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++)
				cin>>M[i][j];
		}
		cout<<Solution(M, m, n)<<endl;
	}
}
