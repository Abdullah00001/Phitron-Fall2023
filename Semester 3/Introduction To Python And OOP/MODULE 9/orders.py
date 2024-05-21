class Order:
    def __init__(self):
        self.Cart={}
    
    def add_to_Cart(self,item):
        if item in self.Cart:
            self.Cart[item]+=item.quantity
        else:
            self.Cart[item]=item.quantity
    
    def remove_from_Cart(self,item):
        if item in self.Cart:
            del self.Cart[item]
    
    @property
    def total_Price(self):
        return sum(item.price*quantity for item,quantity in self.Cart.items())
    def clearCart(self):
        self.Cart={}