from collections import Counter
from functools import cmp_to_key
from typing import List

class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        
        freq = Counter(nums)
        
        def compare(a, b):
            if (freq[a] < freq[b]):
                return -1
            elif freq[a] > freq[b]:
                return 1
            else:
                if a > b:
                    return -1
                elif a < b:
                    return 1
                else:
                    return 0
        return sorted(nums, key=cmp_to_key(compare))

solution = Solution()
print(solution.frequencySort([1,1,2,2,2,3]))