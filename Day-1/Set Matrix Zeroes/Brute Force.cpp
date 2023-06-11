/*
Approach 1 - Brute Force
First, we will use two loops(nested loops) to traverse all the cells of the matrix.
If any cell (i,j) contains the value 0, we will mark all cells in row i and column j with -1 except those which contain 0.
We will perform step 2 for every cell containing 0.
Finally, we will mark all the cells containing -1 with 0.
Thus the given matrix will be modified according to the question.

Time Complexity: O((N*M)*(N + M)) + O(N*M)
Space Complexity: O(1) 
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(matrix[i][j] == 0) {
				for(int k=0; k<m; k++) {
					if(matrix[i][k]) matrix[i][k] = -1;
				}
				for(int k=0; k<n; k++) {
					if(matrix[k][j]) matrix[k][j] = -1;
				}
			}
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(matrix[i][j] == -1) matrix[i][j] = 0;
		}
	}
    }
};
