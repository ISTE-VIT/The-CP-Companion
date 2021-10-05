class Solution {
    public int rob(int[] nums) {
        int[] counts = new int[nums.length];
        Arrays.fill(counts,-1);
        int count = Integer.MIN_VALUE;
        if(nums.length<3){
            for(int i=0;i<nums.length;i++){
                count = Math.max(count,robs(i,i,nums,counts));
            }
        }else{
            for(int i=0;i<3;i++){
                count = Math.max(count,robs(i,i,nums,counts));
            }
        }
        return count;
    }
    int robs(int start,int index,int[] nums,int[] counts){
        if(index>nums.length-1){
            return 0;
        }
        int count = 0;
        for(int i = index+2;i<nums.length;i++){
            if(start==0 && i==nums.length-1) continue;
            if(counts[i]!=-1){
                count = Math.max(counts[i],count);
            }else{
                counts[i] = robs(start,i,nums,counts);
                count = Math.max(counts[i],count);
            }
        }
        return nums[index] + count;
    }
}