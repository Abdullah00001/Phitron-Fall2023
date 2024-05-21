A,B=map(int,input().split())

S=input()

flag=False

if len(S)!=A+B+1:
    print("No")
    exit()
if S[A]!='-':
    print("No")
    exit()
for i in S[A+1]:
        if i.isdigit():
            flag=True
            break
if flag:
    print("Yes")
else:
    print("No")