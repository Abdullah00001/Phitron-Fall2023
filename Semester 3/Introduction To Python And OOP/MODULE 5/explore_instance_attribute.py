class Shop:
    Shop_Name = 'Splash'
    Address = 'Jamuna future Park'
    
    def __init__(self,Customer):
        self.Customer=Customer
        self.Cart=[] #instance attribute
    
    def addToCart(self,item):
        self.Cart.append(item)

def Cart(Customer):
    
    while True:
        item=input()
        if item == 'Break':
            break
        else:
            Customer.addToCart(item)

customer1Name=input()
customer1=Shop(customer1Name)
Cart(customer1)

print(f"Customer Name: {customer1.Customer}\n\nCart: {customer1.Cart}")

customer2Name=input()
customer2=Shop(customer2Name)
Cart(customer2)

print(f"Customer Name: {customer2.Customer}\n\nCart: {customer2.Cart}")


