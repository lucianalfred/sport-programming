n_levels = int(input())

little_x = list(map(int, input().split()))
little_y = list(map(int, input().split()))

x_qtd = little_x.pop(0)
y_qtd = little_y.pop(0)

little_x = set(little_x)
little_y = set(little_y)

x_y_union = little_x.union(little_y)

all_levels = set([i for i in range(1, n_levels + 1)])


if (x_y_union == all_levels):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

