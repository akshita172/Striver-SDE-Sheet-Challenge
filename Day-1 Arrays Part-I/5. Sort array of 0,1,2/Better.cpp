/*
Brute Force: using sorting algorithm
Time Complexity- O(N logN)  Space Complexity- O(N)  -> not in place, taking extra space

Better solution- count 0's, 1's and 2's -> in the end populate element that number of times
Time Complexity- O(2N)  Space Complexity- O(1)  -> why 2 loops -> optimise more

Optimal Solution- dutch National Flag Algorithm
Time Complexity- O(N)   Space Complexity- O(1)
*/

//Approach-2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0, cnt1=0, cnt2=0;
        
        //loop 1
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) {
                cnt0++;
            }
            else if(nums[i] == 1) {
                cnt1++;
            }
            else {
                cnt2++;
            }
        }
        
        //loop 2
        for(int i=0; i<cnt0; i++) nums[i] = 0;
        for(int i=cnt0; i < cnt0 + cnt1; i++) nums[i] = 1;
        for(int i=cnt0 + cnt1; i < nums.size(); i++) nums[i] = 2;
        
    }
};