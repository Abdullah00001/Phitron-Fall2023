from products import Product,Products
class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.__password = password

    def validation(self, password):
        if password == self.__password:
            return True
        else:
            return False


class Seller(User):
    def __init__(self, name, email, password, shopID):
        self.s_Product=Products()
        self.shopID = shopID
        super().__init__(name, email, password)
    
    def addItem(self,product):
        self.s_Product.add_Product(product)
    
    def removeItem(self,itemName):
        self.s_Product.remove_Product(itemName)
    
    def viewItems(self):
        self.s_Product.view_Product()

class Buyer(User):
    def __init__(self, name, email, password, balance):
        self.balance = balance
        super().__init__(name, email, password)