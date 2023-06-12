/*
Approach-3: Kadane Algorithm
Time Complexity- O(N)
Space Complexity- O(1)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum=0;
        
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            
            if(sum > ans) ans = sum; // If sum < 0: discard the sum calculated
            
            if(sum < 0) sum=0;
        }

        // To consider the sum of the empty subarray
        //if (ans < 0) maxi = 0;
        
        return ans;
    }
};