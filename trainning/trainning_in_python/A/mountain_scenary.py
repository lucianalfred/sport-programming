n, k = map(int, input().split())
r = list(map(int, input().split()))

altered = [0] * len(r)

for i in range(1, 2 * n, 2):
    if r[i - 1] >= r[i] or r[i] <= r[i + 1]:
        r[i] -= 1
        altered[i] = 1
        k -= 1

if k > 0:
    for i in range(1, 2 * n, 2):
        if altered[i] == 0:
            r[i] -= 1
            k -= 1
            if k == 0:
                break
print(' '.join(map(str, r)))
