from typing import List

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        intersection = []
        
        for num in nums1:
            if num in nums2:
                intersection.append(num)
        intersection = list(set(intersection))
        return intersection

solution = Solution()
intersection = solution.intersection([1,2,2,1], [2, 2])
print(intersection)
