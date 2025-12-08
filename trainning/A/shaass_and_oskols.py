list_size =  int(input())
birds_list_per_wire = list(map(int, input().split()))
total_shots = int(input())
for _ in  range(total_shots):
    wire, bird = map(int, input().split())
    wire_index = wire - 1
    birds_in_wire = birds_list_per_wire[wire_index]
    left_birds = bird - 1
    right_birds = birds_in_wire - bird
    if wire_index - 1 >= 0:
        birds_list_per_wire[wire_index - 1] += left_birds
    if wire_index + 1 < list_size:
        birds_list_per_wire[wire_index + 1] += right_birds
    birds_list_per_wire[wire_index] = 0
for birds in birds_list_per_wire:
    print(birds)