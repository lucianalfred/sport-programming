from collections import Counter
n = int(input())

if n == 1:
    team = input()
    print(team)
else:
    
    frequencies = {}
    teams = []
    
    for _ in range(n):
        teams.append(input())
    
    frequencies = Counter(teams)    
    win = max(frequencies.values())

    for key, value in frequencies.items():
        if value == win:
            print(key)
            break 

    