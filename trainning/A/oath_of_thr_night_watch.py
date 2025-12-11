n  = int(input())
strength = list(map(int, input().split()))

if n < 3:
    print(0)
else:
    supported = 0
    min_s = min(strength)
    max_s = max(strength)

    for s in strength:
        if ( min_s < s < max_s):
            supported += 1    
    print(supported)
   