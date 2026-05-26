/*
You are given a 2D matrix mat[][] of size n x m. The task is to modify the matrix such that if mat[i][j] is 0, all the elements in the i-th row and j-th column are set to 0.

Examples:

Input: 
    
Output: 
    
Explanation: mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.
Input: 
    
Output: 
    
Explanation: mat[0][0] and mat[0][3] are 0s, so all elements in row 0, column 0 and column 3 are updated to zeroes.
Constraints:
1 ≤ n, m ≤ 500
- 231 ≤ mat[i][j] ≤ 231 - 1
*/

                                                        // SOLUTION
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        int row[m] = {0};
        int col[n] = {0};

        // vector<int> row(m,0);
        // vector<int> col(n,0);
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(row[i] || col[j]){
                    mat[i][j] = 0;
                }
            }
        }
        
    }
};