class Calculator:
    Name = 'Casio'
    Model = 'fx-100'
    
    def sum(self,num1,num2):
        return num1+num2
    
    def minus(self,num1,num2):
        return num1-num2
    
    def multiply(self,num1,num2):
        return num1*num2
    
    def devide(self,num1,num2):
        return num1/num2
    
    def mod(self,num1,num2):
        return num1%num2
    
    def pow(self,num1,powNum):
        return num1**powNum

myDev=Calculator()

print(myDev.sum(100,50))

print(myDev.mod(100,7))