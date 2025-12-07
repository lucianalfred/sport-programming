def list_to_number(value):
    string = ''
    for v in value:
        string += str(v)
    string.strip()
    return int(string)
    
n , x = map(int, input().strip().split())
total = x 
dis = 0

for _ in range(n):
    input_str = input().split()
    operator = input_str[0]
    number_str = int(''.join(map(str, input_str[1:])))
    d = number_str
    if operator == '+':
        total += d
    else:
        if (d > total):
            dis += 1
        else:
            total -= d
print(total, dis)
        
        
        
         