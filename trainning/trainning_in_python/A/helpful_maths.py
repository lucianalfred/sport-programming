numbers = list(map(int,input().split('+')))
numbers.sort()
output_str = ''
for i in range(len(numbers)):
    if (i < len(numbers) - 1):
        output_str += str(numbers[i]) + '+'
    else:
        output_str += '' + str(numbers[i]) 
print(output_str) 