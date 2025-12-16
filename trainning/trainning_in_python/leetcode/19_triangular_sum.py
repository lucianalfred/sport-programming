from typing import List

class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        triangle_sum = []
        triangle_sum.append(nums)
        for i in range(1, len(nums)):
            last_row = triangle_sum[-1]
            new_row = []
            for j in range(len(last_row) - 1):
                s = last_row[j] + last_row[j + 1]
                if (s > 9):
                    s = s % 10
                new_row.append(s)
            triangle_sum.append(new_row)
        return triangle_sum[-1][0]    

sol = Solution()
print(sol.triangularSum([1,2,3,4,5]))