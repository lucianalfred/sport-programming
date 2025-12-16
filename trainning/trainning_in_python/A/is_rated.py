def is_no_increasing_order(numbers):
    for i in range(len(numbers) - 1):
        if not (numbers[i] >= numbers[i + 1]):
            return False
    return True

n =  int(input())

diferences = []
rounds_2 = []
for _ in range(n):
    round1, round2 = map(int, input().split())
    dif = round2 - round1
    rounds_2.append(round2)
    diferences.append(dif)

answer = False
for diference in diferences:
    if diference != 0:
        answer = True

maybe  = is_no_increasing_order(rounds_2)
if answer:
    print("rated")
elif maybe:
    print("maybe")
else:
    print("unrated")
    
