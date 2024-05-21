num1=78
num2=60

# +=,-=,*=,/=

num1+=num2
print(num1)

# in,not,not in,is,is not
a=int(input())
if a<=6:
    print('youre good to go')
elif a==10:
    print('keno tumi bujho na')
else:
    print('sorry')


is_loggedIn=0
is_logOut=False

b=int(input())

if b is is_loggedIn:
    is_logOut=True
    print(is_logOut)

if b is not is_loggedIn:
    print('sorry')

a=int(input())
b=int(input())
c=int(input())

if a<=b:
    print('kire vala achos')
    if b<c:
        print('koitte aichos')
else:
    if(a>b):
        print('tor bap re uncle daki')

toss=input()

if toss=='head':
    if input()== 'grass':
        print('we will filed')
    else:
        print('we will bat first')
elif toss=='tail':
    print('bat first')
else:
    print('wrong input')

money=int(input())

if money<13000:
    if money<15000:
        if money==12000 and money<13000:
            print('Sudhu Coxbazar Ghurmu')
elif money>18000 and money<20000:
    print('coxbazar o jamu kaptai lake o jamu')
elif money<10000 or money>5000:
    print('shopping kormu')
else:
    print('saradin ghumamu')