import math

t = int(input())

results = []

for _ in range(t):
    l, a, b = map(int, input().split())

    if b % l == 0:
        results.append(str(a))
    else:
        d = math.gcd(l, b)
        max_prize = l - d + (a % d)
        results.append(str(max_prize))

print("\n".join(results))
