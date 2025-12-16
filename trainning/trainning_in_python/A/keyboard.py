def change_letter(keyboard_letters, letter, direction):    
    for i in range(len(keyboard_letters)):
        if direction == 'R' and letter == keyboard_letters[i]:
            return str(keyboard_letters[i - 1])
        elif direction == 'L' and letter == keyboard_letters[i]:
            return str(keyboard_letters[i + 1])
        
keyboard_letters = "qwertyuiopasdfghjkl;zxcvbnm,./"
direction = input()
string = input()
answer = ""
for letter in string:
   answer += change_letter(keyboard_letters, letter, direction)
print(answer)