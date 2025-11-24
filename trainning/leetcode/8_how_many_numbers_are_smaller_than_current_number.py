from typing import List

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        smaller = []
        for num in nums:
            count = 0
            for other_num in nums:
                if (num > other_num):
                    count = count + 1
            smaller.append(count)
        return (smaller)

solution = Solution()
print(solution.smallerNumbersThanCurrent([8,1,2,2,3]))
            
        
