def is_Lucky(Number):
    Number=str(Number)
    for num in Number:
        if num!='4' and num!='7':
            return False
    return True

A,B=input().split()
A=int(A)
B=int(B)

flag=True

for i in range(A,B+1):
    if is_Lucky(i):
        print(i,end=" ")
        flag=False

if flag:
    print(-1)