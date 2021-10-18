// Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.
// example:
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.



int maxProduct(vector<int>& nums) {
            vector<int> max_dp(nums.size());
            vector<int> min_dp(nums.size());

            max_dp[0]=nums[0];
            min_dp[0] = nums[0];

            for(int i=1;i<nums.size();i++){
                if(nums[i]<0){
                    max_dp[i]=max(nums[i],nums[i] * min_dp[i-1]);
                    min_dp[i]=min(nums[i],nums[i]*  max_dp[i-1]);
                }
                else{
                    max_dp[i]= max(nums[i],nums[i] * max_dp[i-1]);
                    min_dp[i]= min(nums[i],nums[i] * min_dp[i-1]);
                }
            }
        cout<<endl;
        for(int i=0;i<max_dp.size();i++)
        {
            cout<<max_dp[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<min_dp.size();i++)
        {
            cout<<min_dp[i]<<" ";
        }
            return *max_element(max_dp.begin(),max_dp.end());
    }
