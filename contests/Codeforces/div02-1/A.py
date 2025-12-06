tests_case = int(input())

for _ in range(tests_case):
    size = int(input())
    array = list(map(int, input().split()))
    k0 = len(set(array))
    s = set(array)

    candidates = [x for x in s if x >= k0]
    print(min(candidates)) 