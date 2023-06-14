/*
Approach 1 -> Brute Force
Time complexity: O(n^2)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        
        for(int i=0; i<prices.size(); i++) {
            for(int j=i+1; j<prices.size(); j++) {
                if(prices[j] > prices[i]) ans = max(ans, prices[j]-prices[i]);
            }
        }
        
        return ans;
    }
};