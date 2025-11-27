list_size =  int(input())

birds_list_per_wire = []
input_str = input().strip().split()
for i in range(list_size):
    birds_list_per_wire.append(int(input_str[i]))

total_shots = int(input())
tests = 0

while tests < total_shots:
    input_str = input().strip().split()
    wire = int(input_str[0])
    bird = int(input_str[1])
    
    tests = tests + 1