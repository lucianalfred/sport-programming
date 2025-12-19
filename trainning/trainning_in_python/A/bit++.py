n = int(input())

initial = 0

for _ in range(n):
    operation = input()
    if operation == "++X" or operation == "X++":
        initial += 1
    elif operation == "--X" or operation == "X--":
        initial -= 1

print(initial)