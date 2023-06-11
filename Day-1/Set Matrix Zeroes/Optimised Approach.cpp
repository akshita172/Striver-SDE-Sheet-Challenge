/*
Approach 3 - Most Optimised
Time Complexity: O(2*(N*M))
Space Complexity: O(1)
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int col = matrix[0][0];
    bool fr = false, fc = false;
    
    for(int i=0; i<n; i++) if(matrix[i][0]==0) {
        fc = true; break;
    }
    for(int j=0; j<m; j++) if(matrix[0][j]==0) {
        fr = true; break;
    }

	for(int i=1; i<n; i++) {
		for(int j=1; j<m; j++) {
			if(matrix[i][j] == 0) matrix[0][j] = matrix[i][0] = 0;
		}
	}
	
	for(int i=n-1; i>0; i--) {
		for(int j=m-1; j>0; j--) {
			if(!matrix[i][0] or !matrix[0][j]) matrix[i][j]=0;
		}
	}  
    
    if(fc) {
        for(int i=0; i<n; i++) matrix[i][0] = 0;
    }
    if(fr) {
        for(int i=0; i<m; i++) matrix[0][i] = 0;
    }
    }
};
