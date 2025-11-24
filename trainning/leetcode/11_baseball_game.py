from typing import List

class Solution:
    def calPoints(self, operations: List[str]) -> int:
        points = []
        for char in operations:
            if char == 'C':
                points.pop()
            elif char == 'D':
                points.append(2 * points[-1])
            elif char == '+':
                points.append(points[-1] + points[-2])
            else:
                points.append(int(char))
        return (sum(points))
    

solution = Solution()
print(solution.calPoints(["5","2","C","D","+"]))
