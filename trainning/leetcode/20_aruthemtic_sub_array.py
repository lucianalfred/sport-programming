from typing import List
class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        def checking(nums):
            reason = nums[1] - nums[0]
            for i in range(len(nums)):
                if nums[i + 1] - nums[i] != reason:
                    return False
            return True
        return [checking(nums), checking(l), checking(r)]
    
            
sol = Solution()
print(sol.checkArithmeticSubarrays([7,7, 7 ,7]))
