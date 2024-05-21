number=input()
rvrsNum=number[::-1]

if rvrsNum[0]=='0':
    flag=True
else:
    flag=False
for c in rvrsNum:
    if c!='0':
        flag=False
        print(c,end="")
    else:
        if flag==False:
            print(c,end="")
print()

if number == rvrsNum:
    print("YES")
else:
    print("NO")