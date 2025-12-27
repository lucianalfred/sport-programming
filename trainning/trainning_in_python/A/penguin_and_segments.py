n, k = map(int, input().split())

total = 0

for _ in range(n):
    l, r = map(int, input().split())
    total += (r - l + 1)

mov = (k - (total % k)) % k

print(mov)