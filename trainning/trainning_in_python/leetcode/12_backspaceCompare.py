class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def build_stack(string):
            stack = []
            for char in string:
                if char == '#' and stack:
                    stack.pop()
                elif char != '#':  # Mais explícito
                    stack.append(char)
            return stack
        
        return build_stack(s) == build_stack(t)        
sol = Solution()
print(sol.backspaceCompare("ab#c", "ad#c"))    # True ✓
print(sol.backspaceCompare("ab##", "c#d#"))    # True ✓  
print(sol.backspaceCompare("a#c", "b"))        # False ✓
print(sol.backspaceCompare("###", "#"))        # True ✓ (ambas vazias)
print(sol.backspaceCompare("a##b", "b"))       # True ✓