n , k = map(int, input().strip().split())
numbers = []
for i in range(1, n + 1):
    if (i % 2 == 1):
        numbers.append(i)
for i in range(1, n + 1):
    if (i % 2 == 0):
        numbers.append(i)
print(numbers[k - 1])