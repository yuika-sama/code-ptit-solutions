// BAI 18:
#include <bits/stdc++.h> 
#define MAX 100001
using namespace std;   

#define R 3 
#define C 6 
  
// Function that print matrix in reverse spiral form. 
void Solution(int m, int n, int a[R][C]) { 
    // Large array to initialize it 
    // with elements of matrix 
    long int b[100]; 
      
    /* k - starting row index 
    l - starting column index*/
    int i, k = 0, l = 0; 
      
    // Counter for single dimension array 
    //in which elements will be stored 
    int z = 0; 
      
    // Total elements in matrix 
    int size = m*n; 
  
    while (k < m && l < n) 
    { 
        // Variable to store value of matrix. 
        int val; 
          
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) 
        { 
            // printf("%d ", a[k][i]); 
            val = a[k][i]; 
            b[z] = val; 
            ++z; 
        } 
        k++; 
  
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i) 
        { 
            // printf("%d ", a[i][n-1]); 
            val = a[i][n-1]; 
            b[z] = val; 
            ++z; 
        } 
        n--; 
  
        /* Print the last row from the remaining rows */
        if ( k < m) 
        { 
            for (i = n-1; i >= l; --i) 
            { 
                // printf("%d ", a[m-1][i]); 
                val = a[m-1][i]; 
                b[z] = val; 
                ++z; 
            } 
            m--; 
        } 
  
        /* Print the first column from the remaining columns */
        if (l < n) 
        { 
            for (i = m-1; i >= k; --i) 
            { 
                // printf("%d ", a[i][l]); 
                val = a[i][l]; 
                b[z] = val; 
                ++z; 
            } 
            l++; 
        } 
    } 
    for (int i=size-1 ; i>=0 ; --i) 
    { 
        cout<<b[i]<<" "; 
    } 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int a[R][C] = { {1, 2, 3, 4, 5, 6}, 
                    {7, 8, 9, 10, 11, 12}, 
                    {13, 14, 15, 16, 17, 18}}; 
    Solution(R, C, a); 
    return 0; 
} 
