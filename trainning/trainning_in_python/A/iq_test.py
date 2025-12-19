grid = []
for _ in range(4):
    grid.append(input().strip())
def can_pass_test(grid):
    for i in range(3):  
        for j in range(3): 
            black = 0
            white = 0

            for di in range(2):
                for dj in range(2):
                    cell = grid[i + di][j + dj]
                    if cell == '#':
                        black += 1
                    else:  
              k          white += 1
            
            if black == 4 or white == 4:
                return "YES"
            if black  == 3 or white == 3:
                return "YES"
    
    return "NO"

print(can_pass_test(grid))