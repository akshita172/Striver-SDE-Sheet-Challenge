/*
Approach-2: Better Solution
Time Complexity- O(N^2)
Space Complexity- O(1)

Will give TLE
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            int sum=0;
            for(int j=i; j<nums.size(); j++) {
                sum += nums[j];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};