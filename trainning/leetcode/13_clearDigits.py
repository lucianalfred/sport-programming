from typing import List

class Solution:
    def clearDigits(self, s: str) -> str:
        def processString(string):
            stack =  []
            for char in string:
                if (char.isdigit() and stack):
                    stack.pop()
                else:
                    stack.append(char)
            result = "".join(stack)
            return (result)
        return (processString(s)) 

sol = Solution()
print(sol.clearDigits("abc"))
print(sol.clearDigits("cb34"))
