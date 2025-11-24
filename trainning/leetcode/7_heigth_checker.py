from typing import List
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = sorted(heights)
        index = 0
        for i in range(len(heights)):
            if heights[i] != expected[i]:
                index = index + 1
        return (index) 

solution = Solution()
print(solution.heightChecker([1,1,4,2,1,3]))
        