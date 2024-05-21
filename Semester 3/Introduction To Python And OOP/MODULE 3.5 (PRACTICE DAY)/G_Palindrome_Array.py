N=int(input())

A=list(map(int,input().split()))

B=A[::-1]

if A == B:
    print('YES')
else:
    print('NO')