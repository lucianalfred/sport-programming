n = int(input())
presents = list(map(int, input().strip().split()))

indexes = [0] * n

for i in range(n):
    indexes[presents[i] - 1] =  i + 1  

print(" ".join(map(str, indexes)))
