/*
Brute Force: using sorting algorithm
Time Complexity- O(N logN)  Space Complexity- O(N)  -> not in place, taking extra space

Better solution- count 0's, 1's and 2's -> in the end populate element that number of times
Time Complexity- O(2N)  Space Complexity- O(1)  -> why 2 loops -> optimise more

Optimal Solution- dutch National Flag Algorithm
Time Complexity- O(N)   Space Complexity- O(1)
*/

//Approach-1

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};