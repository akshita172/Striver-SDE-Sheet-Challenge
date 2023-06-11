/*
Optimal Approach- 
Step 1- find the break point -> mark it as idx (all the elements after break point should be in decreasing order)
Step 2- swap the permutation[idx] with immediate largest element [2 1 5 4 0 0] -> {5,4,0,0} -> break point/ idx = 1
        swap 1 with 4 (immediate largest) -> [2 4 5 1 0 0]
Step 3- sort the remaining elements {5,1,0,0} -> {0,0,1,5}

Answer - [2 4 0 0 1 5]

Time Complexity - O(3N) or O(N)
Space Complexity - O(1)
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int idx = -1; 

    for(int i=nums.size()-2; i>=0; i--) {
        if(nums[i] < nums[i+1]) //if no element meet this condition idx remain -1 and just reverse the vector -> edge case
        {  
            idx = i;
            break;
        }
    }

    if(idx == -1) {  // edge case
        reverse(nums.begin(), nums.end());  // Atmost it takes O(N)
        return;
    }

    for(int i=nums.size()-1; i>=0; i--) {
        if(nums[i] > nums[idx]) {  // element at i is greater than idx -> swap
            swap(nums[i], nums[idx]);
            break;
        }
    }

    reverse(nums.begin() +idx+1, nums.end());  // reverse the remaining elements
    }
};