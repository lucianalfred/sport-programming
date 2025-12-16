from typing import List
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        pascal_triangle = [[1], [1,1]]
        if (numRows <= 0):
            return []
        elif (numRows == 1):
            return [[1]]
        elif (numRows == 2):
            return [[1], [1,1]]
        for i in range(2, numRows):
            last_row = pascal_triangle[-1]
            new_row = [1]
            for j in range(len(last_row) - 1):
                new_row.append(last_row[j] + last_row[j + 1])
            new_row.append(1)
            pascal_triangle.append(new_row)
        return pascal_triangle
sol = Solution()
print(sol.generate(5))
