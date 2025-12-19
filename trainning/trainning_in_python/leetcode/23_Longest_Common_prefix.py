from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_str = min(strs, key=len)
      
        for size in range(len(min_str), 0, -1):
            prefix = min_str[:size]
            if all(s.startswith(prefix) for s in strs):
                    return  prefix
        return ""
sol = Solution()
print(sol.longestCommonPrefix(["flower","flow","flight"]))
print(sol.longestCommonPrefix(["dog","racecar","car"]))
print(sol.longestCommonPrefix(["lampada","lamparina","lampard"]))

