n , k = map(int, input().strip().split())

odds = 0
if (n % 2) == 0:
    odds = n // 2
else:
    odds = (n + 1) // 2
if k <= odds:
    print(2 *k - 1)
else:
    print(2 * (k  - odds))
