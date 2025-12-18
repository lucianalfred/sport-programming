class Solution:
    def romanToInt(self, s: str) -> int:
        
        roman_numbers = {'I': 1, 'V': 5, 'X':10, 'L':50, 'C':100,
                         'D':500, 'M':1000}
        values = [roman_numbers[c] for c in s] 
        
        total = 0
        for i in range(len(values)):
            if i < len(values) - 1 and values[i] < values[i + 1]:
                total -= values[i]
            else:
                total += values[i] 
        return (total)


sol = Solution()

print(sol.romanToInt("III"))
print(sol.romanToInt("IV"))
print(sol.romanToInt("VII"))
print(sol.romanToInt("XIX"))
print(sol.romanToInt("XXI"))
