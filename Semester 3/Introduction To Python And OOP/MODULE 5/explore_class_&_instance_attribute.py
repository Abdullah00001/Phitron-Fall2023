class Shop:
    cart=[] #class atribute
    
    def __init__(self,buyerName):
        self.buyerName = buyerName
    def addToCart(self,item):
        self.cart.append(item)

def Cart(Customer):
    
    while True:
        item=input()
        if item == 'Break':
            break
        else:
            Customer.addToCart(item)


customerName=input()
Custormer1 = Shop(customerName)

Cart(Custormer1)

print(f"Customer Name: {Custormer1.buyerName}\n\nCarts : {Custormer1.cart}")