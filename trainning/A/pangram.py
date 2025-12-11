size = int(input())
word  = input()

alphabet = "abcdefghijklmnopqrstuvwxyz"
word = word.lower()

answer = True
for letter in alphabet:
    if letter not in word:
        answer = False
if answer:
    print("YES")
else:
    print("NO")