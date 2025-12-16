import random

n, k = map(int, input().split())

alphabet = ['a', 'b', 'c', 
            'd', 'e','f', 'g',
            'h', 'i', 'j','k',
            'l', 'm', 'n', 'o','p', 
            'q', 'r', 's', 
            't', 'u', 'v', 
            'w', 'y', 'x', 'z'] 

password = ''
first_size = 1
dist = 0
while first_size <= k:    
    leter_index = random.randint(0, len(alphabet) - 1)
    if alphabet[leter_index] not in password:
        password += alphabet[leter_index]    
        first_size += 1
        
while first_size <= n:
    leter_index = random.randint(0, len(alphabet) - 1)
    if alphabet[leter_index] in password and password[-1] != alphabet[leter_index]:
        password += alphabet[leter_index]
        first_size += 1
        
print(password) 