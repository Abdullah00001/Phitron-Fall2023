# HOME WORK 1

num1=int(input())
num2=int(input())
num3=int(input())

if num2<num1 and num3<num1:
    print(num1)
elif num1<num2 and num3<num2:
    print(num2)
else:
    print(num3)

# HOME WORK 2
    
num1=int(input())
num2=int(input())
num3=int(input())

sum=num1+num2+num3

print(sum)

# HOME WORK 3
num1=39
num2=68
while num1<=num2:
    if num1%2==1:
        print(num1)
    num1+=1

# HOME WORK 4

grade=int(input())

if grade>=90:
    print('You Got A')
elif grade>=86:
    print('You Got A-')
elif grade>=82:
    print('You Got B+')
elif grade>=78:
    print('You Got B')
elif grade>=74:
    print('You Got B-')
elif grade>=70:
    print('You Got C+')
elif grade>=66:
    print('You Got C')
elif grade>=62:
    print('You Got C-')
elif grade>=58:
    print('You Got D+')
elif grade>=55:
    print('You Got D-')
else:
    print('Sorry Youre Fail.')