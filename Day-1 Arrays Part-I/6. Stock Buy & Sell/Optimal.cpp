/*
Approach 2 -> Optimal Solution
Time complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = INT_MAX;
        
        for(int i=0; i<prices.size(); i++) {
            buy = min(buy, prices[i]);
            profit = max(profit, prices[i] - buy);
        }
        
        return profit;
    }
};