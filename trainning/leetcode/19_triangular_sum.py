from typing import List

class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        triangle_sum = []
        for i in range(len(nums)):
            sum = 