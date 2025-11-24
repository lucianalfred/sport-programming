from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
       num_set = set(nums)
       n = len(nums)
       for number in range(n + 1):
           if number not in num_set:
               return number 
solution = Solution()
print(solution.missingNumber([9,6,4,2,3,5,7,0,1]))