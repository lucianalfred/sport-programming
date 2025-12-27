from itertools import permutations


n =  int(input())
array = list(map(int, input().split()))

if n == 1:
    print("YES")
    exit()

count = [0] * 1001
for x in array:
    count[x] += 1

if max(count) <= (n + 1) // 2:
    print("YES")
else:
    print("NO")

