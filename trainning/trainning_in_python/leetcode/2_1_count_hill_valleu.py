from typing import List

class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        arr = []
        for num in nums:
            if not  arr or num != arr[-1]:
                arr.append(num)
        count = 0
        for i in range(1, len(arr) - 1):
            if (arr[i] > arr[i-1] and arr[i] > arr[i+1]) or (arr[i] < arr[i-1] and arr[i] < arr[i+1]):
                count += 1   
        return count        
sol = Solution()
print(sol.countHillValley([2,4,1,1,6,5]))