n , t = map(int, input().split())

limit_n = 1

for i in range(0, n -1):
    limit_n *= 10
tests = 1
found = 0
while tests <= 100:
    limit_n += 1
    limit_n = limit_n * t
    if '0' not in str(limit_n) and limit_n % t == 0:
        found = limit_n
        break
    tests += 1

if found != 0:
    print(found)
else: 
    print(-1)
