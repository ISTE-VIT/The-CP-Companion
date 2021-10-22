   def rob(nums):
      prev2 = 0
      prev1 = 0
      for i in range(0,len(nums)):
         temp = prev1
         prev1 = max(prev2+nums[i],prev1)
         prev2 = temp
      return prev1
