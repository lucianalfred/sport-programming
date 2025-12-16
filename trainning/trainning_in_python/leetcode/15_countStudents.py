from typing import List

class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        attempts = 0
        i = 0  
        while students and attempts < len(students):
            if students[0] == sandwiches[i]:
                students.pop(0)
                i += 1
                attempts = 0
            else:
                students.append(students.pop(0))
                attempts += 1
        return len(students)
    
sol = Solution()
print(sol.countStudents( [1,1,0,0],[0,1,0,1]))