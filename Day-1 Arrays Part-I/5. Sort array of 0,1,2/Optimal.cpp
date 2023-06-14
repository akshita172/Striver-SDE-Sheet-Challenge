/*
Brute Force: using sorting algorithm
Time Complexity- O(N logN)  Space Complexity- O(N)  -> not in place, taking extra space

Better solution- count 0's, 1's and 2's -> in the end populate element that number of times
Time Complexity- O(2N)  Space Complexity- O(1)  -> why 2 loops -> optimise more

Optimal Solution- dutch National Flag Algorithm
Time Complexity- O(N)   Space Complexity- O(1)
*/

//Approach-3 -> Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);  // O(1)
                mid++; low++;
            }
            else if(nums[mid] == 1) mid++;
            else {
                swap(nums[mid], nums[high]);  // O(1)
                high--;
            }
        }
    }
};