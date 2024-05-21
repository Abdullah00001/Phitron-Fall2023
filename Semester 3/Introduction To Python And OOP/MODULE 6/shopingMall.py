class Shop:
    shopAddress="Khilkhet"
    
    def __init__(self,shopName,userName):
        self.shopName=shopName
        self.userName=userName
        self.userCart=[]
    def addToCart(self,productName,productPrice,productQunt):
        self.productName=productName
        self.productPrice=productPrice
        self.productQunt=productQunt
        productInfo={productName,productPrice,productQunt}
        self.userCart.append(productInfo)
    def removeFromCart(self,productName):
        for product in self.userCart:
            if product[productName]==productName:
                self.userCart.remove(product)
                return f"{productName} remove from cart"
    def viewCart(self):
        cartInfo=""
        for products in self.userCart:
            cartInfo+=f"Product Name:{products['pro']}"