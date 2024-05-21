class Phone:
    Manufactyre = 'China'
    #CONSTRUCTOR
    def __init__(self,ownerName,Brand):
        self.ownerName = ownerName
        self.Brand = Brand
    
    def messenger(self,number,massage):
        return f"From: {number}\n\nMassage: {massage}"


name=input()

brand=input()

number=int(input())

massage=input()

myPhone=Phone(name,brand)

print(f"Name: {myPhone.ownerName}\n\nBrand: {myPhone.Brand}\n\n{myPhone.messenger(number,massage)}")