n = int(input())
cities = list(map(int, input().split()))

for i in range(n):
    if i == 0:  
        min_dist = cities[1] - cities[0]
        max_dist = cities[n-1] - cities[0]
    elif i == n-1: 
        min_dist = cities[n-1] - cities[n-2]
        max_dist = cities[n-1] - cities[0]
    else:  
        min_dist = min(cities[i] - cities[i-1], cities[i+1] - cities[i])
        max_dist = max(cities[i] - cities[0], cities[n-1] - cities[i])
    
    print(min_dist, max_dist)