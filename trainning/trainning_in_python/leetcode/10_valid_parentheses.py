from typing import List

class Solution:
    def isValid(self, s: str) -> bool:
        pairs = {
            ')' : '(',
            ']' : '[',
            '}': '{'
        }
        
        stack = []
        
        for char in s:
            if char in pairs.values():
                stack.append(char)
            elif char in pairs:
                if not stack or stack[-1] != pairs[char]:
                    return False
                stack.pop()
        return len(stack) == 0
    

solution = Solution()
print(solution.isValid("()]}"))