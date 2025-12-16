n = int(input())
snacks = list(map(int, input().split()))

fallen = set()
next_expected = n

for day in range(n):
    fallen.add(snacks[day])

    to_print = []

    while next_expected in fallen:
        to_print.append(next_expected)
        next_expected -= 1

    if to_print:
        print(' '.join(map(str, to_print)))
    else:
        print()
