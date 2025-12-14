from collections import deque

n, m = map(int, input().split())
adj = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

color = [0] * (n + 1)
visited = [False] * (n + 1)
odd_cycle_count = 0

for i in range(1, n + 1):
    if color[i] == 0:
        
        queue = deque([i])
        color[i] = 1
        is_bipartite = True
        
        while queue:
            u = queue.popleft()
            for v in adj[u]:
                if color[v] == 0:
                    color[v] = 3 - color[u]
                    queue.append(v)
                elif color[v] == color[u]:
                    is_bipartite = False
        
        if not is_bipartite:
            odd_cycle_count += 1
removed = odd_cycle_count
if (n - removed) % 2 == 1:
    removed += 1

print(removed)