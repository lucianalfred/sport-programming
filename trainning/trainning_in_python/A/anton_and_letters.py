letters = input()
new_set = []

for letter in letters:
    if (letter != '{' and letter != '}') and (letter !=',' and letter != ' '):
        new_set.append(letter)

new_set = set(new_set)
print(len(new_set))