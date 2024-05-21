num=int(input())
num1=int(input())

try:
    result=num/num1
except:
    print('hmmm there is an error')
finally:
    print('error in line 5')
print('Done')