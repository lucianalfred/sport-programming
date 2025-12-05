n, b, d = map(int, input().split())
oranges = []
input_str = input().split()

for s in input_str:
    oranges.append(int(s))
wast_section = 0
time = 0
for orange in oranges:
    if orange <= b:
        wast_section += orange
    if wast_section > d:
        time += 1
        wast_section = 0
print(time)
            
