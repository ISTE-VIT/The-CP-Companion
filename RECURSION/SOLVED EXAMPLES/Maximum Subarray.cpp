// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

 

// Example 1:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.


int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        //kadens algorithm
        int maxsum=INT_MIN;
        int cursum=0;
        for(int i=0;i<nums.size();i++)
        {
            cursum=cursum+nums[i];
            if(cursum>maxsum)
            {
                maxsum=cursum;
            }
            if(cursum<0)
            {
                cursum=0;
            }
        }
        return maxsum;
    }
