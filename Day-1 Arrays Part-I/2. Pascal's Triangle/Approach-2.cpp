/*
Time Complexity: O(n2)
Space Complexity: O(1)

General formula = ans = ans * (row-col) / col;
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

  ans.push_back({1});
  if(numRows==1) return ans;

  ans.push_back({1,1});
  if(numRows==2) return ans;

  for(int i=3; i<=numRows; i++) {
    vector<int> temp;
    temp.push_back(1);

    long long num=1;

    for(int j=1; j<i-1; j++) {
      num *= (i-j);
      num /= j;
      temp.push_back(num);
    }

    temp.push_back(1);
    ans.push_back(temp);
  }
  return ans;
    }
};