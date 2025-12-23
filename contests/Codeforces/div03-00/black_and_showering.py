t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    total = 0
    for i in range(1, n):
        total += abs(a[i] - a[i-1])
    
    max_decrease = 0
        
    max_decrease = max(max_decrease, abs(a[1] - a[0]))

    max_decrease = max(max_decrease, abs(a[n-1] - a[n-2]))
    
    
    for i in range(1, n-1):
        original = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i])
        new_val = abs(a[i+1] - a[i-1])
        decrease = original - new_val
        max_decrease = max(max_decrease, decrease)
    
    print(total - max_decrease)