""" DEFAULT PARAMETERS """

def sum(num=0,num1=1,num2=2):
    print(num,num1,num2)
""" STAR ARGS """
def robot(*nums):
    print(nums,'\n')
    for num in nums:
        print(num)

# robot(70,50,30,20)

sum(45,28,90)