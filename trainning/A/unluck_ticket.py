n = int(input())
ticket = input()

first = ticket[:n]
second = ticket[n:]

first_sorted = sorted(first)
second_sorted = sorted(second)

less = True

for i in range(n):
    if first_sorted[i] >= second_sorted[i]:
        less = False
        break

greater = True

for i in range(n):
    if first_sorted[i] <= second_sorted[i]:
        greater = False
        break

if less or greater:
    print("YES")
else:
    print("NO")


