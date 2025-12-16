n, m = map(int, input().split())

photo_pixel = []

for i in range(n):
    colors = input()
    photo_pixel.append(colors)

black_white = True

for line in photo_pixel:
    if 'C' in line or 'M' in line or 'Y' in line:
        black_white = False

if black_white:
    print("#Black&White")
else:
    print("#Color")
