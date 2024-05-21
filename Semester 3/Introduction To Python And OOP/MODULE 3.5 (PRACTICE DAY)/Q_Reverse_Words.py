
S=input()

s=""
crnt_word=''

for char in S:
    if char!=' ':
        crnt_word+=char
    else:
        if crnt_word:
            s+=crnt_word[::-1]+' '
            crnt_word=''
            
if crnt_word:
    s+=crnt_word[::-1]

print(s)