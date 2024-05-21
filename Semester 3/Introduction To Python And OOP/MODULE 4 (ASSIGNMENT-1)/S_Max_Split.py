S=input()
b_String=[]
S_count=0
n=len(S)
l=r=0
ans=""

for i in range(n):
    if S[i]=='L':
        l+=1
    else:
        r+=1
    ans+=S[i]
    if l==r:
        b_String.append(ans)
        ans=""
        S_count+=1
        l=r=0

print(S_count)
for word in b_String:
    print(word)