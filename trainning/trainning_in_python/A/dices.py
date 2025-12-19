n = int(input())

x = int(input())

for _ in range(n):
    a, b = map(int, input().split())
    if a == x or b == x or a == 7 - x or b == 7 - x:
        print("NO")
        exit()
print("YES")