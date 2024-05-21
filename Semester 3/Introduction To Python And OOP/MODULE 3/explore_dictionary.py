# dictionary is similer to key value pair

userInfo={
    'userName': 'Abdullah',
    'userAge':23
}

print(type(userInfo))
print(userInfo)

print(userInfo['userName'])

print(userInfo.keys())
print(userInfo.values())

userInfo['laguages']='python'

print(userInfo)

for key,value in userInfo.items():
    print(key," : ",value)