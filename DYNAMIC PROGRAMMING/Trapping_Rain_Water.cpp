class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxL=0, maxR=0;
        int total=0;
        while(left<right)
        {
            if(height[left]<= height[right])
            {
                if(height[left] >= maxL)
                {
                    maxL=height[left];
                }
                else
                {
                    total += maxL - height[left];
                }
                left++;
            }
            else
            {
                if(height[right] >= maxR)
                {
                    maxR = height[right];
                }
                else
                {
                    total += maxR - height[right];
                }
                right--;
            }
                     
        }
        return total;
    }
};
