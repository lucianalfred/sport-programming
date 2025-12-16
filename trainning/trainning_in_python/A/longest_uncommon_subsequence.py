a = input()
b = input()

if b == a:
    print(-1)
elif len(a) > len(b):
    print(len(a))
else:
    print(len(b))

