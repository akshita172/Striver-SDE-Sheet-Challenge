/*
Approach 2 - Approach (Using two extra arrays):

The steps are as follows:

First, we will declare two arrays: a row array of size N and a col array of size M and both are initialized with 0.
Then, we will use two loops(nested loops) to traverse all the cells of the matrix.
If any cell (i,j) contains the value 0, we will mark ith index of row array i.e. row[i] and jth index of col array col[j] as 1. 
It signifies that all the elements in the ith row and jth column will be 0 in the final matrix.
We will perform step 3 for every cell containing 0.
Finally, we will again traverse the entire matrix and we will put 0 into all the cells (i, j) for which either row[i] or col[j] is marked as 1.
Thus we will get our final matrix.

Time Complexity: O(2*(N*M))
Space Complexity: O(N) + O(M)
*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<int> Rows(n,0);
    vector<int> Cols(m,0);

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(matrix[i][j] == 0) Rows[i] = Cols[j] = 1;
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(Rows[i] or Cols[j]) matrix[i][j] = 0;
		}
	}      
    }
};


/*
Another solution:
void setZeroes(vector<vector<int>>& matrix) {
        set<int> si,sj;
        int row=matrix.size(), col=matrix[0].size(); 
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(matrix[i][j] == 0) {
                    si.insert(i); sj.insert(j);
                }
            }
        }  
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if((si.find(i)!=si.end()) || (sj.find(j)!=sj.end())) matrix[i][j]=0;
            }
        }
    }
*/
